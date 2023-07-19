#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index- searches for integer
 * @array: int array
 * @size: size of int array
 * @cmp: pointer to function
 * Return: index of int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (!array || !cmp || size <= 0)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
			return (index);
	}
	return (-1);
}
