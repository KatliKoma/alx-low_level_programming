#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of the string
 * @s: string is printed
 */
void puts_half(char *str)
{
	int length = sizeof(str);
	int i = (length/2)+1;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
}
