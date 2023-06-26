#include "main.h"

/**
 * puts2 - prints every other number in a string
 * @str: string to be printed
 * Return: void
 */
void puts2(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c += 2;
	}
	_putchar('\n');
}
