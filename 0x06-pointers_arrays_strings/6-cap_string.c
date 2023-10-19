#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * cap_string - capitalizes all words of a string.
 * @str: string to be returned
 *
 * Return: the string
 */
#include "main.h"

char *cap_string(char *str)
{
	int index = 0;
	int cap_next = 1;

	while (str[index])
	{
		char c = str[index];

		switch (c)
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				cap_next = 1;
				break;
			default:
				if (cap_next && c >= 'a' && c <= 'z')
				{
					str[index] -= 32;
					cap_next = 0;
				}
		}
		index++;

	}
	return (str);
}

