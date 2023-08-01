#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list.
 * @head: A pointer pointing to the head of the linked list.
 * @index: The index of the node to return.
 * Return: The nth node or NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *next_ptr = head;

	for (i = 0; next_ptr != NULL && i < index; i++)
		next_ptr = next_ptr->next;

	return (next_ptr);
}
