#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _calloc - allocates array memory
 * @nmemb: number of elements
 * @size: size of element
 * Return: pointer to array memory, else NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int totalSize;

	if (nmemb == 0 || size == 0)
		return (NULL);
	totalSize = nmemb * size;

	ptr = malloc(totalSize);
	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, totalSize);
	return (ptr);
}
