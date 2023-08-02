#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data of a list
 * @head: A pointer to the head of the list
 * Return: Sum of all the data in ze list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *next_ptr = head;

	while (next_ptr)
	{
		sum += next_ptr->n;
		next_ptr = next_ptr->next;
	}
	return (sum);
}
