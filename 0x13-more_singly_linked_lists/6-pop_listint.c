
#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: Pointer to address of the head of the in the list.
 *
 * Return: If the linked list is empty - 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int result;

	if (*head == NULL)
		return (0);

	temp = *head;
	result = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (result);
}
