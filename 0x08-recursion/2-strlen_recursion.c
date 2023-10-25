#include "main.h"
/**
 * _strlen_recursion - length of a string.
 *@s:string to be counted
 *return: returns int length.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		_strlen_recursion(char *s);
	}
	return (length);
}
