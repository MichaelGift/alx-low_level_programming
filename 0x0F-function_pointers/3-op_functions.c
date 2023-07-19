#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add function
 * @a: first int
 * @b: second int
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract function
 * @a: first int
 * @b: second int
 * Return: subtraction result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply function
 * @a: first int
 * @b: second int
 * Return: multiplication result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division function
 * @a: first int
 * @b: second int
 * Return: division result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo function
 * @a: first int
 * @b: second int
 * Return: modulo result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
