#include <stdio.h>
/**
 * print_diagsums -rints the sum of the two diagonals.
 * @a: array
 * @size: array size.
 * Return:no return
 */
void print_diagsums(int a[][5], int size)
{
	int sum_primary = 0;
	int sum_secondary = 0;
	for (int i = 0; i < size; i++)
	{
		sum_primary += a[i][i];
		sum_secondary += a[i][size - i - 1];
	}
	printf("%d, %d\n", sum_primary, sum_secondary);
}
