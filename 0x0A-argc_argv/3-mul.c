#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * multiplies argv[1] and argv[2]
 * @argc: number of arguments
 * @argv: actual argument
 * Return: 1 if error else 0
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
