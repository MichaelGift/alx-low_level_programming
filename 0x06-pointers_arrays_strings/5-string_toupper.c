#include "main.h"

/**
 * string_toupper - entry
 * Description: chnages all lowercase to upper.
 * @c: array of strings
 * Return: uppercase array
 */
char *string_toupper(char *c)
{
	int index = 0;

	while (c[index] != '\0')
	{
		if (c[index] >= 'a' && c[index] <= 'z')
			c[index] = c[index] - ('a' -  'A');
		index++;
	}
	return (c);
}
