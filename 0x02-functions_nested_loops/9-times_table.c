#include "main.h"
/**
 * times_table - prints out the multiplication table
 * Return: void
 */
void times_table(void)
{
	int multiplicand = 0;
	int multiplier = 0;
	int result = 0;

	while (multiplicand <= 9)
	{
		multiplier = 0;
		while (multiplier <= 9)
		{
			result = multiplicand * multiplier;
			if (multiplier != 0)
			{
				_putchar(',');
			}
			if (result <= 9)
			{
				_putchar(' ');
				_putchar(result + '0');
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			multiplier++;
		}
		_putchar('\n');
		multiplicand++;
	}
}
