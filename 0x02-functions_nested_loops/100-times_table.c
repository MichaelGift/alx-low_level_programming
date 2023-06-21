#include "main.h"
/**
 * print_times_table - Print the times table, starting with 0
 * @n: param holding the table num
 * Return: 0
 */
void print_times_table(int n)
{
	int multiplicand = 0, multiplier, result;

	if (n < 0 || n > 15)
		return;
	while (multiplicand <= n)
	{
		for (multiplier = 0; multiplier <= n; multiplier++)
		{
			result = multiplicand * multiplier;
			if (result > 99)
			{
				_putchar(result / 100 + '0');
				_putchar((result / 10 % 10) + '0');
				_putchar(result % 10 + '0');
			}
			else if (result > 9)
			{
				_putchar(' ');
				_putchar(result / 10  + '0');
				_putchar(result % 10 + '0');
			}
			else if (multiplier != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else
				_putchar(result + '0');

			if (multiplier != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		multiplicand++;
	}
}
