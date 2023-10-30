#include <string.h>
/**
 * _strchr -locates a character in a string
 * @s:Pointer to the null-terminated string to be searched.
 * @c:The character to be located in the string.
 * Return: returns null value.
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
