#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Add a node to the beginning of a linked list
 * @head: pointer to the head of the linked list
 * @str: string to be added to the new node
 * Return: address to the new node, NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *copy_str;
	list_t *new_node;
	unsigned int i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	copy_str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
		continue;

	new_node->str = copy_str;
	new_node->len = i;

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
