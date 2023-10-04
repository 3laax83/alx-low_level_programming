#include "main.h"


/**
 * word_count - to count strings words
 * @str: pointer to string.
 * Return: number of words.
 */

int word_count(char *str)
{
	int i, words = 0;

	for (i = 0; str[i] != '\0'; a++)
	{
		if (*str == ' ')
			str++;
		else
		{
			for (; str[i] != ' ' && str[i] != '\0'; i++)
				str++;
			words++;
		}
	}
	return (words);
}


/**
 * free_everything - frees the memory
 * @string: pointer values being passed for freeing
 * @i: counter
 */
void free_everything(char **string, int i)
{
	for (; i > 0;)
		free(string[--i]);
	free(string);
}


/**
 * strtow -  a function that splits a string into words.
 * @str: pointer to string.
 * Return: a pointer to an array of strings (words).
 */


char **strtow(char *str)
{
	int total = 0, a = 0, b = 0, length = 0;
	char **words, *found;

	if (str == NULL || *str == 0)
		return (NULL);
	total = word_count(str);
	if (total == 0)
		return (NULL);
	words = (char **) malloc(sizeof(char *) * (total + 1));
	if (words == 0)
		return (NULL);
	for (; *str != '\0' && a < total;)
	{
		if (*str == ' ')
			str++;
		else
		{
			found = str;
			for (;*str != '\0' && *str != ' ';)
			{
				length++;
				str++;
			}
			words[a] = (char *) malloc(sizeof(char) * (length + 1));
			if (words[a] == 0)
			{
				free_everything(words, a);
				return (NULL);
			}
			while (*found != ' ' && *found != '\0')
			{
				words[a][b] = *found;
				found++;
				b++;
			}
			words[a][b] = '\0'; a++; b = 0; length = 0; str++;
		}
	}
	return (words);
}
