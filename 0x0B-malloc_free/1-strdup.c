#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter
 * @str:the string to duplicate.
 * Return: NULL if str is NULL. On success, custom_strdup returns a pointer to
 * the duplicated string. It returns NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *duplicate = NULL;
	unsigned int i;
	unsigned int length = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}

	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate != NULL)
	{
		for (i = 0; i < length; i++)
		{
			duplicate[i] = str[i];
		}
	}
	else
	{
		duplicate = NULL;
	}

	return (duplicate);
}

