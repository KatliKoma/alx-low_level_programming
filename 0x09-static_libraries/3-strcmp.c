#include <stdio.h>
/**
 * _strcmp - compares two strings.
 * @s1: is the initial string
 * @s2: the string which appends to the initial string
 *
 * Return: the string
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((int)(*s1 - *s2));
}

