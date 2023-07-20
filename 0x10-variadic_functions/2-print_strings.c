#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings -  prints a string
 * @separator: separator btwn string
 * @n: no of args
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int index;
	char *p;

	va_start(args, n);

	for (index = 0; index < n; index++)
	{
		p = va_arg(args, char *);

		if (!p)
			printf("(nil)");
		else
			printf("%s", p);

		if (index < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
