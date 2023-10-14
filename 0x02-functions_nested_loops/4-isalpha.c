#include <ctype.h>
#include "main.h"
/**
 *_isalpha- hecks for alphabetic character.
 *@c: Character to be checked
 *Return: is a letter, lowercase or uppercase
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
