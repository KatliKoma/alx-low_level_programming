#include <sdtio.h>
/**
 * _strncpy - copies a string.
 * @dest: is the initial string
 * @src: the string which appends to the initial string
 * @n: count on index
 * Return: the string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;

	while (*src && n > 0)
	{

		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (result);
}
