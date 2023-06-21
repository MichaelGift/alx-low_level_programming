#include <stdio.h>
/**
 * main - print fibonacci less that 400k
 * Return: 0
 */
int main(void)
{
	int fib1 = 1, fib2 = 2, fib3, sum = 0;

	while (fib2 <= 400000)
	{
		fib3 = fib1 + fib2;
		if (fib3 % 2 == 0)
		{
			sum += fib3;
		}
		fib1 = fib2;
		fib2 = fib3;
	}
	printf("%d\n", sum);
	return (0);
}
