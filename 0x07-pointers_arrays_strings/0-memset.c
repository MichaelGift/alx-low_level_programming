#include "main.h"
/**
 * _memset - fill the memory with a constant byte
 * @s: target memory
 * @b: source bytes
 * @n: byte limiter
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;
	return (s);
}
