#include "main.h"

/**
 * _strlen - gets the length of a string
 * @s: the string param to count
 * Return: string length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
