#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name -prints a name.
 * @name: name to be printed
 *@f: points to the function
 * Return: no return
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	(f) (name);
}
