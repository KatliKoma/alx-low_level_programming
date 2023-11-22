#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Calculates the sum of the data in list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If the list is empty - 0.
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		total += current->n;
		current = current->next;
	}

	return (total);
}
