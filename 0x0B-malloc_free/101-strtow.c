#include "main.h"

/**
 * strtow -  a function that splits a string into words.
 * @str: pointer to string.
 * Return: a pointer to an array of strings (words).
 */


char **strtow(char *str)
{
	int i = 0, sign = 0, size = 0;
	char **words;

	if (str == NULL || str[0] == '\0' || str[0] == ' ' || str[1] == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] != 32)
			size++;

	words = (char **) malloc(sizeof(char *) * (size + 1));

	if (words == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != 32)
		{
			*words[j] = str[i];
			j++;
		}
	}
	return (words;)
}
