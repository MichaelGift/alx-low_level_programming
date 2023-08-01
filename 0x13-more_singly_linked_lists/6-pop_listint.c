#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node and returns its data
 * @head: A pointer to the head of the list
 * Return: the data (n) of the head node
 */

int pop_listint(listint_t **head)
{
	int data_n = 0;
	listint_t *free_node;

	if (head && *head)
	{
		free_node = *head;
		data_n = free_node->n;
		*head = (*head)->next;
		free(free_node);
	}
	return (data_n);
}
