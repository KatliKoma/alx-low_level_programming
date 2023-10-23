#include <stddef.h>
/**
 * _strchr -locates a character in a string
 * @s:Pointer to the null-terminated string to be searched.
 * @c:The character to be located in the string.
 * Return: returns null value.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
	{
		return (s);
	}
		s++;
	}

	return (NULL);
}
