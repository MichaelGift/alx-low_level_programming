#include "main.h"

/**
 * _strncat - entry
 * Description: concatenates two strings
 * @dest: string destination
 * @src: string source
 * @n: byte limit
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, index = 0;

	if (n <= 0)
		return (dest);

	while (dest[len] != '\0')
		len++;

	while (index < n && src[index] != '\0')
		dest[len++] = src[index++];

	dest[len++] = '\0';
	return (dest);
}
