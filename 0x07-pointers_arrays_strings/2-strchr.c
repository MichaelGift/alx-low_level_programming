#include "main.h"
/**
 * _strchr - returns the first occurrence of a char
 * @s: the string containing the target char
 * @c: the target character
 * Return: first char occurence or NULL
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
		if (s[index] == c)
			return (s + index);
	if (s[index] == c)
		return (s + index);
	else
		return ('\0');
}
