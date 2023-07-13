#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - error handles malloc
 * @b: the pointer to be malloc-ed
 * Return: pointer to mem location, 98 if error
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *address;

	address = malloc(b);
	if (address == NULL)
		exit(98);
	return (address);
}
