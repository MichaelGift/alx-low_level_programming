#include "lists.h"

/**
 * print_dlistint - print a double linked list
 * @h: header of double linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n_c = 0;
	int i_p = 0;

	for (n_c = 0; h != NULL; n_c++)
	{
		if (h->prev != NULL && i_p == 0)
		{
			h = h->prev;
			continue;
		}
		else if (h->prev == NULL)
		{
			i_p = 1;
			n_c = 0;
		}
		printf("%i\n", h->n);
		h = h->next;
	}
	return (i);
}
