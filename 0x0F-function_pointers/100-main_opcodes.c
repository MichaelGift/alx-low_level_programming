#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry
 * @argc: argument count
 * @argv: argument variables
 * Return: 0
 */

int main(int argc, char **argv)
{
	int num_bytes, index;
	char *main_func = (char *)main;

	if (argc < 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < num_bytes - 1; index++)
		printf("%02hhx ", main_func[index]);
	printf("%02hhx\n", main_func[index]);

	return (0);
}
