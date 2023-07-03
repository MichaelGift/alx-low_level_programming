#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a sqaaure matrix of ints
 * @a: 2d sqaure array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int c, b;
	int sum1 = 0, sum2 = 0;

	for (c = 0; c < size * size; c += (size + 1))
		sum1 += a[c];
	for (b = size - 1; b < size * size - (size - 1); b += (size - 1))
		sum2 += a[b];
	printf("%d, %d\n", sum1, sum2);
}
