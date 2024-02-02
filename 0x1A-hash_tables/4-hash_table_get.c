#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with
 * a given key in a hash table.
 * @ht: The hash table to look into.
 * @key: The key for which to retrieve the value.
 *
 * Return: The value associated with the specified key,
 * or NULL if key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node = NULL;

	if (!ht || !key || !strcmp(key, ""))
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (!strcmp(node->key, key))
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
