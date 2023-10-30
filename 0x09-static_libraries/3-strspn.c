#include "main.h"
#include <string.h>
/**
 * _strspn -gets the length of a prefix substring.
 * @s:The null-terminated string to be examined.
 * @accept:string containing characters to match in the prefix of 's'.
 * Return:number of bytes in the initial segment of 's'.
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
