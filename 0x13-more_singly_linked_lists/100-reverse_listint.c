#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * reverse_listint - The infamous linked list interview question.
 * @head: A pointer to pointer that points to the head of the list.
 * Return: A pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_ptr = NULL, *current_ptr = *head, *next_ptr;

	while (current_ptr)
	{
		next_ptr = current_ptr->next;
		current_ptr->next = previous_ptr;
		previous_ptr = current_ptr;
		current_ptr = next_ptr;
	}

	*head = previous_ptr;
	return (*head);
}

