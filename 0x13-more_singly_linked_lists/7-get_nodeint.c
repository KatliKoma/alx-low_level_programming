#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - Locates a given node of a list.
 * @head: A pointer to the head of the list.
 * @index: The index of the node to locate - indices start at 0.
 *
 * Return: If the node does not exist - NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (i == index)
			return (current);

		current = current->next;
	i++;
	}

	return (NULL);
}
