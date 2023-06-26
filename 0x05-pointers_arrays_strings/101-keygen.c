#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main block
 * Description: Random password generator
 * Return: 0
 */
int main(void)
{
	int currentTotal = 0, generatedCharacters = 0;
	time_t seed;

	srand((unsigned int)time(&seed));

	while (currentTotal < 2772)
	{
		int randomChar = rand() % 128;

		if ((currentTotal + randomChar) > 2772)
			break;

		currentTotal += randomChar;
		generatedCharacters++;
		printf("%c", randomChar);
	}
	printf("%c\n", (2772 - currentTotal));

	return (0);
}
