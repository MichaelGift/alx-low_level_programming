#include "main.h"
#include <stdio.h>
/**
 * main - print out the first 50  fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int count;
	long int fib1 = 1, fib2 = 2, fib3;

	printf("%lu, %lu, ", fib1, fib2);
	for (count = 3; count <= 50; count++)
	{
		fib3 = fib1 + fib2;
		if (count == 50)
			printf("%lu\n", fib3);
		else
			printf("%lu, ", fib3);

		fib1 = fib2;
		fib2 = fib3;
	}
	return (0);
}
