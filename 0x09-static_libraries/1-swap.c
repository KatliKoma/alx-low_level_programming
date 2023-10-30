#include <stdio.h>
/**
 * swap_int- variables are swapped.
 * @a: integer swap
 * @b: integer swap
 *
 *
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
