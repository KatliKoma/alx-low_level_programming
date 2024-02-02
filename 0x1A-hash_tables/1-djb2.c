#include "hash_tables.h"

/**
 * hash_djb2 - Compute a hash index using the djb2 algorithm.
 * @str: The string to calculate the hash index for.
 *
 * Return: The hash index corresponding to the input string.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int character;
	
	hash = 5381;
	
	while ((character = *str++))
	{
		hash = ((hash << 5) + hash) + character;
	}
	return (hash);
}
