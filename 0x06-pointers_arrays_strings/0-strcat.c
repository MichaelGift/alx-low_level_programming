#include "main.h"

/**
 * _strcat - entry
 * Description: Appends source string to destination string.
 * @src: Source string
 * @dest: Destination string
 * Return: Pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, index;

	while (dest[len] != '\0')
		len++;
	for (index = 0; src[index] != '\0'; index++)
		dest[len + index] = src[index];
	return (dest);
}
