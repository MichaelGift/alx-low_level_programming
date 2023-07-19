#include <stddef.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * get_op_func - returns pointer to the function
 * that has the same operator as argument
 * @s: operator passed as argument
 * Return: pointer to correct function, else NULL
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int index = 0;

	while (ops[index].op != NULL)
	{
		if (*(ops[index].op) == *s && s[0] != '\0')
			return (ops[index].f);
		index++;
	}

	return (NULL);
}
