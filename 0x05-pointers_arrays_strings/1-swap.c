#include "main.h"

/**
 * swap_int - swaps two ints
 * @a: first int
 * @b: Second int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;
}
