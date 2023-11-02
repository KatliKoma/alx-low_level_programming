#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of the new allocated memory
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem_alloc;

	mem_alloc = malloc(b);
	if (mem_alloc == NULL)
		exit(98);
	return (mem_alloc);
}

