#include "search_algos.h"

/**
  * linear_search - Searches for a value in an array
  *
  * @array: Pointer to first element of the array.
  * @size: Number of elements.
  * @value: Target value
  *
  * Return: First index of value else -1
  *
  * Description: Prints a value every time it is compared in the array.
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
