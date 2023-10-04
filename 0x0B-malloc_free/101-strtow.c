#include "main.h"

/**
 * strtow -  a function that splits a string into words.
 * @str: pointer to string.
 * Return: a pointer to an array of strings (words).
 */


char **strtow(char *str)
{
	char **words;
	int i;
	int j = 0;
	int count = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != 32)
			count++;
	}

	words = malloc(sizeof(char) * count);
	if (words == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != 32)
		{
			*words[j++] = str[i];
		}
	}
	return (words);
}
