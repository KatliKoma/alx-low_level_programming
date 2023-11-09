#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: variable number of strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args_list;
	unsigned int i;
	char *current_str;

	va_start(args_list, n);

	for (i = 0; i < n; i++)
	{
		current_str = va_arg(args_list, char *);

		if (current_str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", current_str);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(args_list);
}
