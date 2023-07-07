#include <stdio.h>

/**
 * main - entry
 * Description: prints out the number of arguments
 * @argc: the number of arguments
 * @argv: actual arguments
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
