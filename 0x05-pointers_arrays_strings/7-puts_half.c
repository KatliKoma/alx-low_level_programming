#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of the string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int length = sizeof(str);
	int i = (length - 1) / 2;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
}
