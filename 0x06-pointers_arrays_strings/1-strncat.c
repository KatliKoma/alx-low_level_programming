#include <stdio.h>
/**
 * _strncat - appends string.
 * @dest: is the initial string
 * @src: the string which appends to the initial string
 * @n: counter for string
 * Return: the string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (result);

}
