#include "main.h"

/**
 * leet - entry
 * Description: Encodes into 1337
 * @str: string to be encoded
 * Return: encoded char
 */
char *leet(char *str)
{
	int a, i = 0;
	char enc[] = "a4e3o0t7l1";

	while (str[i] != '\0')
	{
		for (a = 0; a < 10; a += 2)
		{
			if (str[i] == enc[a] || str[i] == enc[a] - 32)
			{
				str[i] = enc[a + 1];
				break;
			}
		}
		i++;
	}
	return (str);
}
