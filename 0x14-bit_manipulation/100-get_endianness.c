#include <stdio.h>
#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	int i = 2;

	if (i & 1)
		return (0);
	else
		return (1);
}

