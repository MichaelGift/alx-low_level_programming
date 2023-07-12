#include <stdio.h>
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
 * Return: The pointer to the string array or NULL if memory allocation
 * fails or str is an empty string ("") or str is NULL
 */
char **strtow(char *str)
{
	int wordCount, i, j = 0;
	char **words, *token, *copy;

	if (str == NULL || *str == '\0')
		return (NULL);

	wordCount = countWords(str);
	if (wordCount == 0)
		return (NULL);

	copy  = strdup(str);
	if (copy == NULL)
		return (NULL);

	words = malloc(sizeof(char *) * (wordCount + 1));
	if (words == NULL)
		return (NULL);

	token = strtok(copy, " ");
	while (token != NULL)
	{
		words[j] = strdup(token);
		if (words[j] == NULL)
		{
			for (i = 0; i < j; i++)
				free(words[i]);
			free(words);
			free(copy);
			return (NULL);
		}
		j++;
		token = strtok(NULL, " ");
	}
	words[j] = NULL;

	free(copy);

	return (words);
}
