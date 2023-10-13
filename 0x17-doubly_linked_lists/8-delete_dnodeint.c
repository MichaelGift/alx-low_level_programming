#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at index
 * @head: Pointer to a pointer to head
 * @index: Index of the node to be deleted
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *pre, *head_copy = *head;
	unsigned int i;

	while (head_copy != NULL && head_copy->prev != NULL)
	{
		head_copy = head_copy->prev;
		*head = (*head)->prev;
	}
	if (head_copy != NULL && index != 0)
	{
		for (i = 0; i < index && head_copy != NULL; i++)
		{
			pre = head_copy;
			head_copy = head_copy->next;
		}
		if (head_copy != NULL)
		{
			pre->next = head_copy->next;
			if (pre->next != NULL)
				head_copy->next->prev = pre;
			free(head_copy);
			return (1);
		}
		return (-1);
	}
	if (head_copy != NULL && index == 0)
	{
		pre = head_copy->next;
		if (pre == NULL)
			*head = NULL;
		else
		{
			pre->prev = NULL;
			free(head_copy);
			*head = pre;
		}
		return (1);
	}
	return (-1);
}
