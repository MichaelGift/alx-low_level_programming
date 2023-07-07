#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * Descritiption: Returns the number of coins from cents
 * @argc: number of arguments
 * @argv: actual argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cent, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);
	while (cent > 0)
	{
		if (cent >= 25)
			cent -= 25;
		else if (cent >= 10)
			cent -= 10;
		else if (cent >= 5)
			cent -= 5;
		else if (cent >= 2)
			cent -= 2;
		else
			cent -= 1;
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
