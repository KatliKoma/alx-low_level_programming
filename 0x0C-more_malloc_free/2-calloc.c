#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @num_elements: number of elements
 * @element_size: size of bytes for each element
 *
 * Return: pointer to memory or NULL if num_elements, element_size is 0.
 */

void *_calloc(unsigned int num_elements, unsigned int element_size)
{
	char *ptr;
	unsigned int index;

	if (num_elements == 0 || element_size == 0)
	{
		return (NULL);
	}

	ptr = malloc(num_elements * element_size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < (num_elements * element_size); index++)
	{
		ptr[index] = 0;
	}

	return (ptr);
}
