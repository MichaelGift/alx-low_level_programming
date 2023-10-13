#include "lists.h"

/**
 * sum_dlistint - Calculate the sum of all data in linked list
 * @head: Pointer to the head of the doubly linked list.
 * Return: The sum of all nodes.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *head_copy;
	int sum = 0;

	head_copy = head;
	if (head_copy != NULL)
	{
		while (head_copy->prev != NULL)
			head_copy = head_copy->prev;
		while (head_copy != NULL)
		{
			sum += head_copy->n;
			head_copy = head_copy->next;
		}
		return (sum);
	}
	else
		return (0);
}
