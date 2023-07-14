#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, product;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (num1 <= 0 || num2 <= 0)
	{
		printf("Error\n");
		exit(98);
	}

	product = num1 * num2;
	printf("%d\n", product);

	return (0);
}
