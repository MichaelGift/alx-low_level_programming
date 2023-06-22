#include "main.h"
/**
 * _isdigit - check if the int is a number or letter
 * @c: param to be checked
 * Return: 1 if is number, 0 if else
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
