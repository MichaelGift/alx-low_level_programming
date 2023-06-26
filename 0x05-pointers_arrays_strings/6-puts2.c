#include "main.h"

/**
 * puts2 - prints every other number in a string
 * @str: string to be printed
 * Return: void
 */
void puts2(char *str)
{
	int c = 0;

	for (c = 0; str[c] != '\0' || str[c + 1] != '\0'; c += 2)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
