#include "main.h"

/**
 * puts_half - prints half of the string
 * @s: string is printed
 */
void puts_half(char *str)
{
	int i,
	int size;

	for (size = 0; str[size] != '\0'; size++)
	{

		i = (size - 1) / 2;
	}
	while (str[i] != '\0') 
	{
		putchar(str[i]);
		i++;
	}

	putchar('\n');
}
