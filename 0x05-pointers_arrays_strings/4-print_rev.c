#include <stdio.h>
/**
 * print_rev - prints string in reverse.
 * @s: single character of string
 *
 * Return: no return
 */

void print_rev(char *s)
{
	int size;

	while (s[size] != '\0')
	{
		size++;
	}

	for (int i = size - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}
