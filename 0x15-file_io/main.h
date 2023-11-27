#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <fcntl.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int copy_file(const char *source, const char *destination);
void print_error_and_exit(int code, const char *message, const char *file_name);

#endif
