#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The long integer to be printed in binary.
 * Return: *Null void.
 **/
void print_binary(unsigned long int n)
{
	if ((n >> 1) == 0 && n == 0)
	{
		_putchar('0');
		return;
	}

	if (n >> 1 != 0)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
