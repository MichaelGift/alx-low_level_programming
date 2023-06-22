#include "main.h"
/**
 * print_line - print _
 * @n: the param to determine number of _
 * Return: void
 */
void print_line(int n)
{
	int count;

	for (count = 0; count < n; count++)
		_putchar('_');
	_putchar('\n');
}
