#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	char sizeChar;
	int sizeInt;
	long int sizeLongInt;
	long long int sizeLongLongInt;
	float sizeFloat;

	printf("Size of a char: %lu byte(s)\n", sizeof(sizeChar));
	printf("Size of a int: %lu byte(s)\n", sizeof(sizeInt));
	printf("Size of a long int: %lu byte(s)\n", sizeof(sizeLongInt));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(sizeLongLongInt));
	printf("Size of a float: %lu byte(s)\n", sizeof(sizeFloat));
	return (0);
}
