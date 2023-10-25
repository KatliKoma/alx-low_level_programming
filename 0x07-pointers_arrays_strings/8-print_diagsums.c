#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers
 *
 * @a: matrix
 * @size: size of matrix
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_diagsums(int *a, int size)
{
	int i, j, total;

	for (i = 0, j = 0, total = 0; i < size; i++, j += size)
	{
		total = total + *(a + (i + j));
		printf("%i, ", total);
	}

	for (i = 0, j = size - 1, total = 0; i < size; i++, j += size - 2)
	{
		total += *(a + (i + j));
		printf("%i\n", total);
	}
}
