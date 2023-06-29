#include "main.h"

/**
 * _strcmp - entry
 * Description: compare string length
 * @s1: First string
 * @s2: Second string
 * Return: Difference between s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
