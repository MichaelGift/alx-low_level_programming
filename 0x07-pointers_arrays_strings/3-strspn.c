#include "main.h"
/**
 * _strspn - get the length of the substring prefix
 * @s: string
 * @accept: suffix
 * Return: Length of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, count = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				count++;
				break;
			}
		}
		if (accept[b] == '\0')
			return (count);
	}
	return (count);
}
