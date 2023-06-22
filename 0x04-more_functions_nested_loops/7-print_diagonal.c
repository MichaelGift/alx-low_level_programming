#include "main.h"
/**
 * print_diagonal - print \ n number of times
 * @n: param to determine number of times
 * Return: void
 */
void print_diagonal(int n)
{
	int count, row;

	for (row = 0; row < n; row++)
	{
		for (count = 0; count <= row; count++)
		{
			if (count != row)
				_putchar(' ');
			else
				_putchar('\\');
		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
