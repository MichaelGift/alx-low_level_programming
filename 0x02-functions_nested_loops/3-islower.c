#include "main.h"
/**
 * _islower - checks if c is lower
 * @c: param to be checked
 * Return: 1 if lowercase
 */
int _islower(int c)
{
	if (c > 98 && c < 123)
		return (1);
	else
		return (0);
}
