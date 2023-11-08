#include <stdio.h>

/**
 * array_iterator - Applies a specified function to every element in an array.
 * @array: The array of elements.
 * @size: The size of the array.
 * @action: A pointer to the function to be used for each element.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

