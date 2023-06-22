#include <stdio.h>
/**
 * main -  checks for prime factors looping through 2 - 9
 * Return: 0
 */
int main(void)
{
	long a, b;

	a = 612852475143;

	for (b = 2; a > b; b++)
	{
		while (a % b == 0)
		{
			a = a / b;
		}
	}
	printf("%lu\n", b);
	return (0);
}
