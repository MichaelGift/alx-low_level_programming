#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: A pointer to the head of the linked list
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;
	const listint_t *next_ptr = h;

	while (next_ptr != NULL)
	{
		printf("%i\n", next_ptr->n);
		node_count++;
		next_ptr = next_ptr->next;
	}

	return (node_count);
}
