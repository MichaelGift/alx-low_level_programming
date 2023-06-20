#include "main.h"
/**
 * print_alphabet_x10 - prints a-z 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int rounds = 10;
	char letter;

	while (rounds != 0)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		rounds--;
		_putchar('\n');
	}
}
