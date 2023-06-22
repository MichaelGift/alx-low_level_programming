#include "main.h"
/**
 * print_square - prints a square based on input
 * @size: detemines the size of square
 * Return: void
 */
void print_square(int size)
{
	int count, row;

	if (size <= 0)
		_putchar('\n');
	for  (row = 0; row < size; row++)
	{
		for (count = 0; count < size; count++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
