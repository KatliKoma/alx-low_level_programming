#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * custom_create_array - array of chars, and initializes it with a  char.
 * @size: the size of the array to create
 * @c: the character to initialize the array with.
 * Return: NULL if size is 0 or if it fails to allocate memory.
 */

char *create_array(unsigned int size, char c)
{
	char *newArray = NULL;
	unsigned int index;

	if (size > 0)
	{
		newArray = (char *)malloc(size * sizeof(char));
		if (newArray == NULL)
		{
			return (NULL);
		}

		for (index = 0; index < size; index++)
		{
			newArray[index] = c;
		}
	}
	return (newArray);
}
