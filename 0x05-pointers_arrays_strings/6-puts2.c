#include <stdio.h>
/**
 * puts2 - Prints alternate characters from a string.
 * @str: the input string
 *
 * Return: no return
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}

	putchar('\n');
}
