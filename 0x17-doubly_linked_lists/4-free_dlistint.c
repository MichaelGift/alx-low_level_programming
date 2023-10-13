#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			temp = head->next;
			free(head);
			head = temp;
		}
	}
}
