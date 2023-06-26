#include "main.h"

/**
 * puts2 - prints every other number in a string
 * @str: string to be printed
 * Return: void
 */
void puts2(char *str)
{
	int c = 0, i = 0;

	while (str[i] != '\0')
		i++;
	for (c = 0; c < i; c += 2)
		_putchar(str[c]);
	_putchar('\n');
}
