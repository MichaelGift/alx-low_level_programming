#include "main.h"

/**
 * _puts - prints a string using puts
 * @str: the param holding the string
 * Return: void
 */
void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
