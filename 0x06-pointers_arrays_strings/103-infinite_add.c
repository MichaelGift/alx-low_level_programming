#include "main.h"

/**
 * infinite_add - entry
 * Description: Add two numbers
 * @n1: first number
 * @n2: second number
 * @r: The buffer for storing the result
 * @size_r: The size of the buffer
 * Return: r otherwise 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, maxlen, i;
	char dig1, dig2, carry, remainder, temp;

	for (len1 = 0; *(n1 + len1) != '\0'; len1++)
		carry = 0;
	for (len2 = 0; *(n2 + len2) != '\0'; len2++)
		remainder = 0;
	maxlen = len1 > len2 ? len1 : len2;
	i = maxlen;
	if (size_r < maxlen + 1)
		return (0);
	*(r + maxlen) = '\0';
	i--;
	len1--;
	len2--;

	for (; i >= 0; i--)
	{
		dig1 = len1 >= 0 ? *(n1 + len1) - '0' : 0;
		dig2 = len2 >= 0 ? *(n2 + len2) - '0' : 0;
		remainder = (dig1 + dig2 + carry) % 10;
		carry = (dig1 + dig2 + carry) / 10;
		*(r + i) = (remainder + '0');
		len1--;
		len2--;
	}
	if (carry > 0 && size_r >= maxlen + 2)
	{
		for (i = maxlen + 1; i > 0; i--)
		{
			temp = *(r + i);
			*(r + i) = *(r + i - 1);
			*(r + i - 1) = temp;
		}
		*(r + i) = carry + '0';
		return (r);
	}
	return ((carry > 0 && size_r < maxlen + 2) ? 0 : r);
}
