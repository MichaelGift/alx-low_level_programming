#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * countWords - Computes the number of words in a string
 * @str: The source string
 * Return: The number of words
 */
int countWords(char *str)
{
	int count = 0, i;
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	}
	return (count);
}

/**
 * strtow - Splits a string into words (array of strings)
 * @str: The string to split
 *
 * Return: The pointer to the string array or NULL if memory allocation
 * fails or str is an empty string ("") or str is NULL
 */
char **strtow(char *str)
{
	int wordCount, wordLen = 0, len, i, j = 0, k = 0;
	char **words, prevChar;

	if (str == NULL || *str == '\0')
		return (NULL);
	wordCount = countWords(str);
	if (wordCount == 0)
		return (NULL);
	words = malloc(sizeof(char *) * (wordCount + 1));
	if (words == NULL)
		return (NULL);

	len = strlen(str);
	prevChar = ' ';

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			if (prevChar == ' ')
			{
				while (str[i + wordLen] != '\0' && str[i + wordLen] != ' ')
					wordLen++;
				words[j] = malloc(sizeof(char) * (wordLen + 1));
				if (words[j] == NULL)
				{
					for (i = 0; i < j; i++)
						free(words[i]);
					free(words);
					return (NULL);
				}
				k = 0;
				j++;
			}
			words[j - 1][k++] = str[i];
		}
		prevChar = str[i];
	}
	words[j] = NULL;
	return (words);
}

