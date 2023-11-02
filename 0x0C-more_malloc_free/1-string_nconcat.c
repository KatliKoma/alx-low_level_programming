#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 * @n: Maximum number of bytes to concatenate.
 *
 * Return: A pointer to the newly allocated memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1Len = 0, s2Len = 0, i, amount;
	char *conStr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1Len])
		s1Len++;
	while (s2[s2Len])
		s2Len++;

	amount = (n >= s2Len) ? s2Len : n;

	conStr = malloc((s1Len + amount + 1) * sizeof(char));

	if (conStr == NULL)
		return (NULL);

	for (i = 0; i < s1Len; i++)
		conStr[i] = s1[i];
	for (; i < (s1Len + amount); i++)
		conStr[i] = s2[i - s1Len];
	conStr[i] = '\0';

	return (conStr);
}
