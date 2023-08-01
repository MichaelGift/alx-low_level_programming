#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - Adds a node to the beggining of a linked list
 * @head: Pointer to the head of the linked list
 * @n: the data for the new node
 *
 * Return: The address of the new element, NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);

}
