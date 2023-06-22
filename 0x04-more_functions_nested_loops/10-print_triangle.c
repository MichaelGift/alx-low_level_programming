#include "main.h"
/**
 * print_triangle - using # print a right angle triangle based on input
 * @size: param to determine triangle size
 * Return: void
 */
void print_triangle(int size)
{
	int count, row;

	if (size <= 0)
		_putchar('\n');
	for  (row = 0; row < size; row++)
	{
		for (count = 0; count < size; count++)
		{
			int spacing = size - row - 1;

			if (count < spacing)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
