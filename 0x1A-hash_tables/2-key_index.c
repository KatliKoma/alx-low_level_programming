#include "hash_tables.h"

/**
 * key_index - Computes the index for a key in a hash table.
 * @key: The key to find the index for.
 * @size: The size of the array in the hash table.
 *
 * Return: The index at which the key/value pair should be stored in the array
 * of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_index;

	if (size == 0)
		return (0);

	hash_index = hash_djb2(key);

	return (hash_index % size);
}
