#include "main.h"
/**
 * more_numbers - print 0-14 10 times
 * Return: void
 */
void more_numbers(void)
{
	int count = 1;
	int num;

	while (count <= 10)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
		count++;
	}
}
