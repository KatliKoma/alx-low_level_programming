#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * cap_string - capitalizes all words of a string.
 * @str: string to be returned
 *
 * Return: the string
 */
char *cap_string(char *str)
{
	int capitalize_next = 1;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (isspace(str[i]) || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			capitalize_next = 1;
		}
		else if (capitalize_next)
		{
			str[i] = toupper(str[i]);
			capitalize_next = 0;
		}
		else
		{
			str[i] = tolower(str[i]);
		}
	}

	return (str);
}
