#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry
 * Description: Add all supplied arguments
 * @argc: argument count
 * @argv: argument vector ie, actual argument
 * Return: 0 else 1
 */
int main(int argc, char *argv[])
{
	int index = 1, i, result = 0;

	while (index < argc)
	{
		char *arg = argv[index];

		for (i = 0; arg[i] != '\0'; i++)
		{

			if (!isdigit(arg[i]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[index]);
		index++;
	}
	printf("%d\n", result);
	return (0);
}
