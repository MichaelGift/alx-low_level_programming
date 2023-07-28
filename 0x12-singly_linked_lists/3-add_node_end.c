#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - Adds a node to the end of a linked list
 * @head: Pointer to the head of the linked list
 * @str: String to be added to the new node
 * Return: Pointer to head of linked list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int size = 0;
	list_t *new_node;
	list_t *current_node;
	char *copy_str;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	copy_str = strdup(str);

	while (str[size] != '\0')
		size++;

	new_node->str = copy_str;
	new_node->len = size;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	current_node = *head;
	while (current_node->next != NULL)
		current_node = current_node->next;

	current_node->next = new_node;

	return (*head);
}
