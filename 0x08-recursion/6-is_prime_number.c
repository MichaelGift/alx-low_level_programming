#include "main.h"

/**
 * is_prime_number - return 1 if int is prime else 0
 * @n: int to be checked
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <  0 || n == 1)
		return (0);
	return (prime_checker(n, 2));
}

/**
 * prime_checker - checks for prime number by guess
 * @n: number to be checked
 * @g: guessed no
 * Return: 1 if prime else 0
 */
int prime_checker(int n, int g)
{
	if (n == g)
		return (1);
	else if (n % g == 0)
		return (0);
	return (prime_checker(n, g + 1));
}
