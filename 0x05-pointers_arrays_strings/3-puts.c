#include <stdio.h>
/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: characters of string
 *
 * Return: no return
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
}
