#include <stdio.h>
/**
 * main - main block
 * Return: void
 */
int main(void)
{
	unsigned long int  prev1 = 0, prev2 = 1, curr1 = 0, curr2 = 2;
	int count;

	printf("%lu, %lu, ", prev2, curr2);
	for (count = 2; count < 98; count++)
	{
		if (prev2 + curr2 > 10000000000 || curr1 > 0 || prev1 > 0)
		{
			unsigned long int  carry = (prev2 + curr2) / 10000000000;
			unsigned long int  remainder = (prev2 + curr2) % 10000000000;
			unsigned long int  temp = prev1 + curr1 + carry;

			prev1 = curr1;
			curr1 = temp;
			prev2 = curr2;
			curr2 = remainder;
			printf("%lu%lu", curr1, curr2);
		}
		else
		{
			unsigned long int temp = prev2 + curr2;

			prev2 = curr2;
			curr2 = temp;
			printf("%lu", curr2);
		}

		if (count != 97)
			printf(", ");
	}

	printf("\n");
	return (0);
}
