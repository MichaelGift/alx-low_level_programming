#include "lists.h"

/**
 * get_dnodeint_at_index - Get the nth node.
 * @head: Pointer to the head of linked list.
 * @index: Index of the node, starting from 0.
 * Return: Pointer to the nth node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *head_copy;
	unsigned int i;

	head_copy = head;
	if (head_copy != NULL)
	{
		while (head_copy->prev != NULL)
			head_copy = head_copy->prev;
		for (i = 0; (i < index) && (head_copy != NULL); i++)
			head_copy = head_copy->next;
		return (head_copy);
	}
	else
		return (NULL);
}
