#include "main.h"
/**
 * _strstr - first first occurence of a string
 * @haystack: source string
 * @needle: target string
 * Return: haystack and needle on top XD
 */
char *_strstr(char *haystack, char *needle)
{
	int p, q, r;

	for (p = 0; haystack[p] != '\0'; p++)
	{
		for (r = p, q = 0; needle[q] != '\0'; q++, r++)
		{
			if (needle[q] != haystack[r] || haystack[r] == '\0')
				break;
		}
		if (needle[q] == '\0')
			return (haystack + p);
	}
	return (0);
}
