#include "main.h"
/**
 * times_table - prints out the multiplation table
 * Return: void
 */
void times_table(void)
{
	int multiplicand = 0;
	int multiplier = 0, result;

	while (multiplicand <= 9)
	{
		for (multiplier = 0; multiplier <= 9; multiplier++)
		{
			result =  multiplicand * multiplier;
			if (result <= 9)
			{
				_putchar(result + '0');
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}

			if (multiplier != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		multiplicand++;
	}
}
