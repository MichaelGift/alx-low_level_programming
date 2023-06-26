#include "main.h"

/**
 * puts_half - prints the last half of the strng
 * @str: the string to be printed
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, mid;

	while (str[len] != '\0')
		len++;
	for (mid = len / 2; mid < len; mid++)
		_putchar(str[mid]);
	_putchar('\n');
}
