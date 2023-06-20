#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: int param.
 * Return: last digit
 */
int print_last_digit(int n)
{
	int newN;

	if (n < 0)
	{
		newN = (n % 10) * -1;
		_putchar(newN + '0');
		return (newN);
	}
	else
	{
		newN = n % 10;
		_putchar(newN + '0');
		return (newN);
	}
}
