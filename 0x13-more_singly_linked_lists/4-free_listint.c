#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint - Frees a list from memory
 * @head: A pointer pointing to the head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *free_ptr;

	while (head != NULL)
	{
		free_ptr = head;
		head = head->next;
		free(free_ptr);
	}
}
