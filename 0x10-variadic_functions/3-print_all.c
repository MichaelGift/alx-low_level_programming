#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_char - prints a char
 * @vargs: argument
 */
void print_char(va_list vargs)
{
	printf("%c", va_arg(vargs, int));
}

/**
 * print_int - print an int
 * @vargs: argument
 */
void print_int(va_list vargs)
{
	printf("%d", va_arg(vargs, int));
}

/**
 * print_float - prints a float
 * @vargs: argument
 */
void print_float(va_list vargs)
{
	printf("%f", va_arg(vargs, double));
}

/**
 * print_string - print a string
 * @vargs: argumnet
 */
void print_string(va_list vargs)
{
	char *ch;

	ch = va_arg(vargs, char *);
	if (ch == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", ch);
}

/**
 * print_all - prints all arguments
 * @format: format
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int index, index2;
	char *str = "";
	va_list args;

	forms type[] = {
	{"c", print_char},
	{"i", print_int},
	{"f", print_float},
	{"s", print_string},
	{NULL, NULL},
	};

	va_start(args, format);
	index = 0;
	while (format && format[index])
	{
		index2 = 0;

		while (type[index2].f)
		{
			if (*(type[index2].f) == format[index])
			{
				printf("%s", str);
				type[index2].func(args);
				str = ", ";
			}
			index2++;
		}
		index++;
	}
	va_end(args);
	printf("\n");
}
