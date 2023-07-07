#include <stdio.h>

/**
 * main - entry
 * Description: This function prints of its program
 * @argc: the number of commands
 * @argv: the actual commands stored as arry
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
