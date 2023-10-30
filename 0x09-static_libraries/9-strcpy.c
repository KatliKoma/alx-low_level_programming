#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copy of string.
 * @dest: copy of string
 * @src: string to be copied
 *
 * Return: the string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}

	dest[i] = '\0';

	return (dest);
}
