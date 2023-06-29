#include "main.h"

/**
 * _strncpy - entry
 * Description: A function that copies src string to dest
 * @dest: Destination string
 * @src: Srouce of the string
 * @n: byte limiter
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	while (src[index] != '\0')
	{
		if (index < n)
			dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
