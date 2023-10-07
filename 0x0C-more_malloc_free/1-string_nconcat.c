#include "main.h"

int _strlen(char *str)
{
	const *s;

	for (s = str; *s; ++s)
		;
	return (s - str);
}

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: pointer to the destined string.
 * @s2: pointer to the source string.
 * @n: number of byte sliced from s2.
 * Return: pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null
 * terminated, If the function fails, it should return NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int counter = 0;
	char *save;
	int len1 = _strlen(s1);
	int len2 = _strlen(s2);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = NULL;

	if (len2 >= n)
	{
		len2 = n;
		save = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	else
	{
		save = malloc(sizeof(char) * (len1 + n + 1));
	}

	if (save = NULL)
		return (NULL);

	for (; *s1; ++s1);
	while ((*save++ = s1++) != 0);
	while ((*save++ = s2++) && counter < n)
		counter++;

	return (save);
}
