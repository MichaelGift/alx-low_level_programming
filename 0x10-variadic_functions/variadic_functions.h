#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>

/**
 * struct format - specifies a format for a specific function
 * @f: determines operation to performed
 * @func: pointer to funtion to carry out the operation
 */
typedef struct format
{
	char *f;
	void (*func)(va_list vargs);
} forms;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
