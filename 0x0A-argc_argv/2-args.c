#include <stdio.h>
#include "main.h"
/**
 * main - rints all arguments it receives.
 * @argc: The count of arguments for numbering
 * @argv: An array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		char *arg = argv[i];

		while (*arg)
		{
			_putchar(*arg);
			arg++;
		}
		_putchar('\n');
	}

	return (0);
}
