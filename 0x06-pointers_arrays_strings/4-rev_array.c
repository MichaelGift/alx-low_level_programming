#include "main.h"

/**
 * reverse_array - entry
 * Description: reverse an array
 * @a: array to be reversed
 * @n: number of array elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
