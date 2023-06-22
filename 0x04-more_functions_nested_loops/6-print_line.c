#include "main.h"
/**
 * print_line - print _
 * @n: the param to determine number of _
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
		while (n != 0)
		{
			_putchar('_');
			n--;
		}
	_putchar('\n');
}
