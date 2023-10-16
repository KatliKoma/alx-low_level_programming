#include <stdio.h>
/**
 * puts2 - half a string.
 * @str: the string to printed
 *
 * Return: no return
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
