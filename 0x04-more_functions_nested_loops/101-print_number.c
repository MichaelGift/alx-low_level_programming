#include "main.h"
/**
 * print_number - prints integers
 * @n: param holdin the in to be printed
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n >= 1000)
	{
		_putchar((n / 1000 % 10) + '0');
		_putchar((n / 100 % 10) + '0');
		_putchar((n / 10 % 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n >= 100)
	{
		_putchar((n / 100 % 10) + '0');
		_putchar((n / 10 % 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n >= 10)
	{
		_putchar((n / 10 % 10) + '0');
		_putchar((n % 10) + '0');
	}
	else 
	{
		_putchar(n + '0');
	}
}
