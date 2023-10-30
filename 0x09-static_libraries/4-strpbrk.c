#include "main.h"
#include <string.h>
/**
 * _strpbrk -searches a string for any of a set of bytes.
 * @s:The null-terminated string to be examined.
 * @accept:string containing the set of bytes to search for.
 * Return:the function returns a pointer to the byte.
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}

