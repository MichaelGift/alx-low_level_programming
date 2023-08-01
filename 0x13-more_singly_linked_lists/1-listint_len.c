#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list
 * @h: A pointer to the head of the list
 * Return: The number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;
	const listint_t *next_ptr = h;

	while (next_ptr != NULL)
	{
		node_count++;
		next_ptr = next_ptr->next;
	}

	return (node_count);
}
