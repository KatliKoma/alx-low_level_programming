#include <stdlib.h>
#include "main.h"

/**
 * str_concat - a function that concatenates two strings
 * @str1: the first string.
 * @str2: the second string.
 * Return: A pointer that points to a newly allocated space in memory
 * containing the contents of str1 followed by the contents of str2, and
 * null-terminated. Returns NULL on failure.
 */
char *str_concat(char *str1, char *str2)
{
	int len1, len2, i, j, k = 0;
	char *result = NULL;

	if (str1 == NULL)
	{
		str1 = "";
	}
	if (str2 == NULL)
	{
		str2 = "";
	}

	for (len1 = 0; str1[len1]; len1++)
		;

	for (len2 = 0; str2[len2]; len2++)
		;

	result = malloc((len1 + len2 + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; str1[i]; i++)
	{
		result[k++] = str1[i];
	}

	for (j = 0; str2[j]; j++)
	{
		result[len1 + j] = str2[j];
	}


	result[len1 + j] = '\0';

	return (result);
}

