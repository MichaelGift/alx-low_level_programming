#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Prints name
 * @name: the strin to be printed
 * @f: pointer to the print function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
