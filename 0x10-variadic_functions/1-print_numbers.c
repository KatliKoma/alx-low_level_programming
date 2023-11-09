#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: variable number of integers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args_list;
	unsigned int i;

	va_start(args_list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args_list, int));

		if (separator != NULL && i < n - 1)
		printf("%s", separator);
	}

	printf("\n");

	va_end(args_list);
}
