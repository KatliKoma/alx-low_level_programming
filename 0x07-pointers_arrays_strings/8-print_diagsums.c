#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -rints the sum of the two diagonals.
 * @a: array
 * @size: array size.
 * Return:no return
 */
void print_diagsums(int *a, int size)
{
	int sum_primary = 0;
	int sum_secondary = 0;

	for (int i = 0; i < size; i++)
	{
		sum_primary += a[i * size + i];
		sum_secondary += a[i * size + (size - i - 1)];
	}

	printf("Sum of primary diagonal: %d\n", sum_primary);
	printf("Sum of secondary diagonal: %d\n", sum_secondary);
}

