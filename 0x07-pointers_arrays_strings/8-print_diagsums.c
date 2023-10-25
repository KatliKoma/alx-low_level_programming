#include <stdio.h>
#include "main.h"
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
	int i, total1, total2;

	total1 = 0;
	total2 = 0;

	for (i = 0; i < size; i++)
	{
		total1 += a[i * size + i];
		total2 += a[i * size + (size - i - 1)];
	}

	_putchar(total1 + '0');
	_putchar(',');
	_putchar(' ');
	_putchar(total2 + '0');
	_putchar('\n');
}

