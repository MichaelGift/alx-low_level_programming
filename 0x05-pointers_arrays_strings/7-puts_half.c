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
	if (len % 2 != 0)
		mid = (len / 2) + 1;
	else
		mid = len / 2;
	for (mid = mid; mid < len; mid++)
		_putchar(str[mid]);
	_putchar('\n');
}
