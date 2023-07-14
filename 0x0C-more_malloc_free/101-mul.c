#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * multiply - Multiplies two strings representing non-negative integers.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: A string representing the product of num1 and num2.
 */
char *multiply(const char *num1, const char *num2)
{
	int len1 = strlen(num1), len2 = strlen(num2), len = len1 + len2;
	int *result = calloc(len, sizeof(int));
	int i, j, digit1, digit2, product, sum, index = 0, start = 0;
	char *cProduct;

	if (result == NULL)
		return (NULL);
	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			digit1 = num1[i] - '0';
			digit2 = num2[j] - '0';
			product = digit1 * digit2;
			sum = result[i + j + 1] + product;
			result[i + j] += sum / 10;
			result[i + j + 1] = sum % 10;
		}
	}
	cProduct = malloc((len + 1) * sizeof(char));
	if (cProduct == NULL)
	{
		free(result);
		return (NULL);
	}

	while (start < len && result[start] == 0)
		start++;
	while (start < len)
		cProduct[index++] = result[start++] + '0';

	cProduct[index] = '\0';
	free(result);
	if (index == 0)
	{
		cProduct[0] = '0';
		cProduct[1] = '\0';
	}
	return (cProduct);
}

/**
 * main - Entry point
 * @argc: The argument count
 * @argv: The argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	const char *num1, *num2;
	char *product;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = argv[1];
	num2 = argv[2];

	product = multiply(num1, num2);

	if (product == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	printf("%s\n", product);

	free(product);

	return (0);
}
