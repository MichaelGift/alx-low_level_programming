#include <stdio.h>
#include "main.h"
/**
 * main - print the sum of
 * numbers divisible 3 and 5 below 1024
 * Return: 0
 */
int main(void)
{
	int ul = 1024;
	int sum = 0;

	for (ul = 0; ul < 1024; ul++)
	{
		if (ul % 3 == 0 || ul % 5 == 0)
			sum += ul;
	}
	printf("%d", sum);
	return (0);
}
