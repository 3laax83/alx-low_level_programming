#include "main.h"


/**
 * length - return length of string.
 * @str: pointer to string
 * Return: length of str
 */

int length(char *str)
{
	const char *s;

	for(s = str; *s; ++s)
		;
	return (s - str);
}



/**
 * word_count - to count strings words
 * @str: pointer to string.
 * Return: number of words.
 */

int word_count(char *str)
{
	int i, words = 0;

	for (i = 0; i <= length(str); i++)
	{
		if (str[i] == ' ' || (str[i] == '\0' && str[i - 1] != ' '))
			words++;
	}
	return (words);
}

/**
 * strtow -  a function that splits a string into words.
 * @str: pointer to string.
 * Return: a pointer to an array of strings (words).
 */


char **strtow(char *str)
{
	char **split;
	int i, j = 0, temp = 0, size = 0, words = word_count(str);
	if (words == 0)
		return (NULL);
	split = (char **) malloc(sizeof(char *) * (words + 1));
	if (split != NULL)
	{
		for (i = 0; i <= length(str); i++)
		{
			if ((str[i] != ' ') && (str[i] != '\0'))
				size++;
			else 
			{
				split[j] = (char *) malloc(size + 1);
				if (split[j] != NULL)
				{
					while (temp < size)
					{
						split[j][temp] = str[i - size + temp];
						temp++;
					}
					split[j][temp] = '\0';
					size = temp = 0;
					j++;
				}
				else
				{
					while (j-- >= 0)
						free(split[j]);
					free(split);
					return (NULL);

				}
			}
		}
		split[words] = NULL;
		return (split);
	}
	else
		return (NULL);
}
