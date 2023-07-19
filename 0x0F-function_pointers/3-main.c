#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument variables
 * Return: 0
 */

int main(int argc, char **argv)
{
	int num1, num2, result;
	int (*ops)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	ops = get_op_func(argv[2]);
	if (ops == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	result = ops(num1, num2);
	printf("%d\n", result);

	return (0);
}
