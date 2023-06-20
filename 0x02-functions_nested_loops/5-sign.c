#include "main.h"
/**
 * print_sign -  checks whether number is greater, less or 0
 * @n: the number to checked
 * Return: 1 if > 0, 0 if 0, -1 if < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
