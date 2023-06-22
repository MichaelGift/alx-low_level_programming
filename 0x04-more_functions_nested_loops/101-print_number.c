#include "main.h"
/**
 * print_number - prints integers
 * @n: param holdin the in to be printed
 * Return: void
 */
void print_number(int n)
{
	int p;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		p = n / 10;
		print_number(p);
	}
	_putchar(n % 10 + '0');
}
