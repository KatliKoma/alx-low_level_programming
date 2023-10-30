#include <stdio.h>

/**
 * _strcat - appends string.
 * @dest: is the initial string
 * @src: the string which appends to the initial string
 *
 * Return: the string
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	 *dest = '\0';

	return (result);
}
