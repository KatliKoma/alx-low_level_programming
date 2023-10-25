#include "main.h"
/**
 * _strlen_recursion - length of a string.
 *@s:string to be counted
 *return: returns int length.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

		
	return 1+ _strlen_recursion(s+1);
}
