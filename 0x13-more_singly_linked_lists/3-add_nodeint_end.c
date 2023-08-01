#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of the linked list
 * @head: A pointer to the head of the linked lits
 * @n: Data for the new node
 * Return: Address of the new elemts, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *next_ptr;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	next_ptr = *head;
	while (next_ptr->next != NULL)
		next_ptr = next_ptr->next;

	next_ptr->next = new_node;
	return (new_node);
}
