#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - prints sum of all its parameters
 * @n: number of args
 * Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int index, sum = 0;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);

	for (index = 0; index < n; index++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
