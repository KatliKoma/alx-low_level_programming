#include "main.h"
#include <ctype.h>
/**
 *_islower- Checks for lowercase alphabet
 *@c: Character to be checked
 *Return: if character is lowercase, otherwise
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
