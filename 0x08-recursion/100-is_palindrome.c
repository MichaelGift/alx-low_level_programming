#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks if string is palindrome
 * @s: string to be checked
 * Return: 1 if true else 0
 */
int is_palindrome(char *s)
{
	int str_len = strlen(s);

	if (!*s)
		return (0);
	return (p_checker(s, 0, str_len - 1));
}
/**
 * p_checker - checks if string is palindrome
 * Description: comparing chars at start and end of string
 * then moving towards center
 * @s: string to be checked
 * @start: start of string i.e s[0]
 * @end: end of string s[-1]
 * Return: 1 if palindrome else 0
 */
int p_checker(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	else if (s[start] != s[end])
		return (0);
	return (p_checker(s, start + 1, end - 1));
}
