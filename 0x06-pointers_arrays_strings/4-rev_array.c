#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array 
 * @a: array of integers
 * @n: array size
 *
 * Return: no return
 */
void reverse_array(int *a, int n) 
{
	int i, temp;
	for (i = 0; i < n / 2; i++) 
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}
