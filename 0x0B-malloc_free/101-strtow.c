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

	while (str[i])
	{
		if (sign == 0 && str[i] != ' ')
			sign == 1;
		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			sign = 0;
			size++;
		}
		i++;
	}

	size += sign == 1 ? 1 : 0;

	if (size == 0)
		return (NULL);

	words = (char **) malloc(sizeof(char *) * (size + 1));
	if (words == NULL)
		return (NULL);

}
