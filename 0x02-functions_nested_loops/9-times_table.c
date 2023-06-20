#include "main.h"
/**
 * times_table - Print the 9 times table, starting with 0
 * Return: 0
 */
void times_table(void)
{
	int multiplicand = 0;
	int multiplier;
	int result;

	while (multiplicand < 10)
	{
		multiplier = 0;
		while (multiplier < 10)
		{
			result = multiplicand * multiplier;

			if (result > 9)
			{
				_putchar(result / 10  + '0');
				_putchar(result % 10 + '0');
			}
			else if (multiplier != 0)
			{
				_putchar(' ');
				_putchar(result + '0');
			}
			else
			{
				_putchar(result + '0');
			}

			if (multiplier != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			multiplier++;
		}
		_putchar('\n');
		multiplicand++;
	}
}
