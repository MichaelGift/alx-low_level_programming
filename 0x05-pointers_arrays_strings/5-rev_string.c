#include "main.h"

/**
 * rev_string - reversesasstring
 * @s: stringtobereversed
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0, start = 0, end = 0;
	char temp;

	while (s[len] != '\0')
		len++;
	end = len - 1;
	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
