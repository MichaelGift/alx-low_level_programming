#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints numbers to 98 whether high or low
 * @n: the int param
 * Return: void
 */
void print_to_98(int n)
{
	int a;

	if (n < 98)
	{
		for (a = n; a <= 98; a++)
		{
			printf("%d", a);
			printf(",");
			printf(" ");
		}
		printf("\n");
	}
	else
	{
		for (a = n; a >= 98; a--)
		{
			printf("%d", a);
			printf(",");
			printf(" ");
		}
		printf("\n");
	}
}
