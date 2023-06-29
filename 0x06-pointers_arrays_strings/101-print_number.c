gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 101-main.c 101-print_number.c -o 101-print_number#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int count;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	count = 1;

	while (n / count > 9)
		count *= 10;

	while (count >= 1)
	{
		_putchar((n / count) + '0');
		n %= count;
		count /= 10;
	}
}
