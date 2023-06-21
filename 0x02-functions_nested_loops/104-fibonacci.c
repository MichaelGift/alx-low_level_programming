#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - print out the first 98  fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long int up1 = 0, lp1 = 1, up2 = 0, lp2 = 2;
	int count;

	printf("%lu, %lu, ", lp1, lp2);
	for ( count = 2; count < 98; count++)
	{
		unsigned long int temp;
		if (lp2 > LARGEST)
		{
			unsigned long int q = lp2 / LARGEST;

			lp2 %= LARGEST;
			up2 += up1 + q;
		}
		temp = lp2;

		lp2 += lp1;
		lp1 = temp;

		printf("%lu", lp2);

		if (count != 97)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
