#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @start: minimum value
 * @end: maximum value
 *
 * Return: a pointer to the newly created array. Otherwise, if start > end or
 * malloc fails, return NULL
 */

int *array_range(int start, int end)
{
	int *arr;
	int i, length;

	if (start > end)
		return (NULL);

	length = end - start + 1;
	arr = malloc(length * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		*(arr + i) = start;
		start++;
	}

	return (arr);
}
