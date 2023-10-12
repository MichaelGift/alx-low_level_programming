#include "lists.h"

/**
 * dlistint_len - get the number of nodes in a double linked list
 * @h: header of double linked list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i_c = 0;
	int n_p = 0;

	for (i_c = 0; h != NULL; i_c++)
	{
		if (h->prev != NULL && n_p == 0)
		{
			h = h->prev;
			continue;
		}
		else if (h->prev == NULL)
		{
			n_p = 1;
			i_c = 0;
		}
		h = h->next;
	}
	return (i_c);
}
