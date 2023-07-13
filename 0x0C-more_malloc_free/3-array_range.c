#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of ints
 * @min: smallest value
 * @max: largest values
 * Return: pointer to array range or NULL
 */
int *array_range(int min, int max)
{
	int *arr, size, i;

	if (min >  max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;
	return (arr);
}
