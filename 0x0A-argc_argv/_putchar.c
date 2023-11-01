#include <unistd.h>

/**
 * _putchar - Outputs the character 'c' to the standard output
 * @c: The character to be printed
 *
 * Return: Returns 1 on success.
 * On an error, it returns -1, and sets the appropriate errno.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
