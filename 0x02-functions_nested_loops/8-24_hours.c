#include "main.h"
/**
 * jack_bauer -  count up to 23:59
 * Return: 0
 */
void jack_bauer(void)
{
	int total_minutes = 0;
	int h1 = 0, h2 = 0 , m1 = 0, m2 = 0;

	while (total_minutes < 1440)
	{
		_putchar(h1 + '0');
		_putchar(h2 + '0');
		_putchar(':');
		_putchar(m1 + '0');
		_putchar(m2 + '0');
		_putchar('\n');

		m2++;
		if (m2 > 9)
		{
			m2 = 0;
			m1++;
		}
		if (m1 > 5)
		{
			m1 = 0;
			h2++;
		}
		if (h2 > 9)
		{
			h2 = 0;
			h1++;
		}
		total_minutes++;
	}
}
