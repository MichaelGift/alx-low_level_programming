#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @n: integer param
 * Return: int if negatie mutlitply by -1
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}

