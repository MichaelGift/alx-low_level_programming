#include <stddef.h>
#include "function_pointers.h"


/**
 * array_iterator - executes parameter function array length times
 * @array: pointer to int array
 * @size: size of int array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array == NULL || action == NULL)
		return;

	for (index = 0; index < size; index++)
		action(array[index]);
}
