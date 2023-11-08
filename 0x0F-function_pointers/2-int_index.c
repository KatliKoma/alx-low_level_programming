#include <stddef.h>
/**
 * int_index - This function searches for an integer in an array.
 *@array: The array in which the search is performed.
 *@size: The number of elements in the array.
 *@cmp: A function pointer used to compare values.
 *Return: It returns the index of the first element.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (size <= 0 || cmp == NULL || array == NULL)
	{
		return (-1);
	}

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
		{
			return (j);
		}
	}

	return (-1);
}

