#include <stdio.h>
/**
 * print_array - elements of an array of integers.
 * @a array of elements
 * @n number of elements
 *
 * Return: no return
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	if (i < n - 1)
	{
		printf(", ");
	}
	}
	printf("\n");
}

