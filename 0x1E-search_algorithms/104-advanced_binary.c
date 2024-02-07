#include "search_algos.h"

/**
  * advanced_binary_recursive - Searches recursively for a value in a sorted
  *
  * @array: Pointer to the first element of the [sub]array.
  * @left: Starting index of the [sub]array.
  * @right: Ending index of the [sub]array.
  * @value: Target value.
  *
  * Return: Index of value else -1
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
  * advanced_binary - Searches for a value in a sorted array
  *
  * @array: Pointer to the first element.
  * @size: No of elements.
  * @value: Target value.
  *
  * Return: First index of value else -1
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
