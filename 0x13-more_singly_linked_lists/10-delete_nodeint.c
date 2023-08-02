#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at the given index of a list.
 * @head: A pointer to a pointer pointing to the head of the list.
 * @index: The index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous_ptr, *next_ptr;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	next_ptr = *head;
	previous_ptr = NULL;
	if (index == 0)
	{
		*head = (*head)->next;
		free(next_ptr);
		return (1);
	}

	for (i = 0; i < index && next_ptr != NULL; i++)
	{
		previous_ptr = next_ptr;
		next_ptr = next_ptr->next;
	}

	if (next_ptr == NULL)
		return (-1);

	if (previous_ptr != NULL)
		previous_ptr->next = next_ptr->next;
	free(next_ptr);
	return (1);
}
