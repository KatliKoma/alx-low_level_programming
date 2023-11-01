#include "main.h"
#include <stdlib.h>
/**
 * is_digit - Check if a character is a digit
 * @c: The character to check
 * Return: 1 if it's a digit, 0 otherwise
 */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * main - Adds positive numbers
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	if (argc == 1)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!is_digit(argv[i][j]))
			{
				char *error_message = "Error\n";

				while (*error_message)
				{
					_putchar(*error_message);
					error_message++;
				}
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

		print_number(sum);
		_putchar('\n');

	return (0);
}

