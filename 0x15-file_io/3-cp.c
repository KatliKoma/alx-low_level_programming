#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * print_error_and_exit - Prints an error message and exits the program.
 * @code: The exit code for the program.
 * @message: The formatted error message.
 * @file_name: The name of the file associated with the error.
 */

void print_error_and_exit(int code, const char *message, const char *file_name)
{
	dprintf(STDERR_FILENO, message, file_name);
	exit(code);
}

/**
 * copy_file - Copies the content of one file to another.
 * @source_file: The name of the source file.
 * @destination_file: The name of the destination file.
 *
 */
void copy_file(const char *source_file, const char *destination_file)
{
	int fd_from, fd_to, read_bytes, write_bytes;
	char buffer[BUFFER_SIZE];

	fd_from = open(source_file, O_RDONLY);

	if (fd_from == -1)
	{
		print_error_and_exit(98, "Error: Can't read from file %s\n", source_file);
	}

	fd_to = open(destination_file, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR |
		S_IWUSR | S_IRGRP | S_IROTH);

	if (fd_to == -1)
	{
		print_error_and_exit(99, "Error: Can't write to %s\n", destination_file);
	}

	while ((read_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_bytes = write(fd_to, buffer, read_bytes);
		if (write_bytes != read_bytes)
		{
			print_error_and_exit(99, "Error: Can't write to %s\n", destination_file);
		}
	}

	if (read_bytes == -1)
	{
		print_error_and_exit(98, "Error: Can't read from file %s\n", source_file);
	}

	if (close(fd_from) == -1)
	{
		print_error_and_exit(100, "Error: Can't close fd %d\n", fd_from);
	}

	if (close(fd_to) == -1)
	{
		print_error_and_exit(100, "Error: Can't close fd %d\n", fd_to);
	}
}
