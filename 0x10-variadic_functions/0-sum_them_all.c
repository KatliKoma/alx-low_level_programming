#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: numbers of integers passed to the function
 *
 * Return: the sum of all its parameters, otherwise if n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, total_sum = 0;
	va_list args_list;

	if (n == 0)
	{
		return (0);
	}

	va_start(args_list, n);

	for (i = 0; i < n; i++)
	{
		total_sum += va_arg(args_list, int);
	}

	va_end(args_list);
	return (total_sum);
}

