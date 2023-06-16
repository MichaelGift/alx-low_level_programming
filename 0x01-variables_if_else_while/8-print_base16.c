#include <stdio.h>
/**
 * main - print base 16 character in lowercase
 * Return: 0
 */
int main(void)
{
	char letter;
	int num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}
