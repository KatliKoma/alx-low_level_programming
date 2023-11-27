#include "main.h"
int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		print_error_and_exit(97, "Usage: %s file_from file_to\n", argv[0]);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}
