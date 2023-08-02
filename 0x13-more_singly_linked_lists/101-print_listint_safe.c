#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lists.h"


/**
 * print_listint_safe - A function that prints a linked list safely.
 * @head: Points to the beginning of a linked list.
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow_ptr, *fast_ptr;
	size_t size = 0;

	if (head == NULL)
		return (0);
	slow_ptr = head;
	fast_ptr = head->next;

	while (fast_ptr != NULL && fast_ptr < slow_ptr)
	{
		size += 1;
		printf("[%p] %i\n", (void *)slow_ptr, slow_ptr->n);
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next;
	}

	printf("[%p] %i\n", (void *)slow_ptr, slow_ptr->n);
	size += 1;

	if (fast_ptr)
		printf("-> [%p] %i\n", (void *)fast_ptr, fast_ptr->n);
	return (size);
}

