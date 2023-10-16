#include <stdio.h>
/**
 * puts2 - prints every other character of a string, starting with the first character,
 * followed by a new line.
 * @str: the input string
 *
 * Return: no return
 */
void puts2(char *str)
{
	if (str != NULL)
	{
		int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}
		putchar('\n');
	}
}
