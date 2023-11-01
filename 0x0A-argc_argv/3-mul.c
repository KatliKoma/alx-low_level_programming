#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _putchar(char c);

/**
 * main - Entry point
 *
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		for (int i = 0; "Error\n"[i] != '\0'; i++)
		{
			_putchar("Error\n"[i]);
		}
	return (1);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	if (num2 == 0)
	{
		for (int i = 0; "Error: Division by zero\n"[i] != '\0'; i++)
		{
			_putchar("Error: Division by zero\n"[i]);
		}
	return (2);
	}

	int result = num1 * num2;

	if (result < 0)
	{
		_putchar('-');
		result = -result;
	}

	if (result == 0)
	{
		_putchar('0');
	}
	else
	{
		int divisor = 1;
		int temp = result;

		while (temp > 9)
		{
			temp /= 10;
			divisor *= 10;
		}

		while (divisor > 0)
		{
			_putchar('0' + result / divisor);
			result %= divisor;
			divisor /= 10;
		}
	}

	_putchar('\n');

	return (0);
}

