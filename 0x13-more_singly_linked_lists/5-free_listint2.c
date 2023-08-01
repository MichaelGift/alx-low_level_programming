#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint2 - Frees a lists and sets the head to NULL
 * @head: A pointer to the head of the linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *free_ptr;
	listint_t *ptr;

	if (head)
	{
		ptr = *head;
		while ((free_ptr = ptr) != NULL)
		{
			ptr = ptr->next;
			free(free_ptr);
		}
		*head = NULL;
	}
}
