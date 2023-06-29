#include "main.h"

/**
 * rot13 - entry
 * Description: encode string in rot13
 * @str: string to be encoded
 * Return: encoded string
 */
char *rot13(char *str)
{
	int i, j;
	char norm[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char enc[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; norm[j] != '\0'; j++)
		{
			if (str[i] == norm[j])
			{
				str[i] = enc[j];
				break;
			}
		}
	}
	return (str);
}
