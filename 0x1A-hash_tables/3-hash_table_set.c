#include "hash_tables.h"
#include <string.h>
/**
 * replace_value - Replaces the value associated with a pre-existing key.
 * @ht: Double pointer to the hash_node_t list.
 * @key: New key to replace the existing key.
 * @value: Value to associate with the new key.
 */
void replace_value(hash_node_t **ht, const char *key, const char *value)
{
	hash_node_t *temp = *ht;

	while (temp && strcmp(temp->key, key))
		temp = temp->next;

	free(temp->value);
	temp->value = strdup(value);
}

/**
 * check_key - Checks if a key exists in a hash table.
 * @ht: Pointer to the hash_node_t list.
 * @key: Key to look for.
 *
 * Return: 1 if the key is found, 0 otherwise.
 */

int check_key(hash_node_t *ht, const char *key)
{
	while (ht)
	{
		if (!strcmp(ht->key, key))
			return (1);

		ht = ht->next;
	}
	return (0);
}

/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: Double pointer to the hash_node_t list.
 * @key: New key to add to the node.
 * @value: Value to add to the node.
 *
 * Return: The address of the new element, or NULL if it fails.
 */

hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));

	if (!new)
		return (NULL);

	new->key = strdup(key);
	new->value = strdup(value);

	if (*head == NULL)
	{
		(*head) = new;
		new->next = NULL;
	}
	else
	{
		new->next = (*head);
		(*head) = new;
	}

	return (*head);
}

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: Hash table to which the element should be added or updated.
 * @key: The key of the element. It cannot be an empty string.
 * @value: The value associated with the key. It can be an empty string.
 *
 * Return: 1 if the operation succeeds, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (!ht || !key || !strcmp(key, "") || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if (check_key(ht->array[index], key))
	{
		replace_value(&ht->array[index], key, value);
		return (1);
	}

	add_node(&ht->array[index], key, value);

	if (ht->array[index] == NULL)
		return (0);

	return (1);
}
