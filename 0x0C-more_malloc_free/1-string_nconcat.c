#include "main.h"

/**
 * _strlen - to find string length.
 * @str: pointer to string.
 * Return: length of string.
 */

int _strlen(char *str)
{
	const char *s;

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
	int newN = (int16_t) n;
	char *save;
	int len1 = _strlen(s1);
	int len2 = _strlen(s2);
	int i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (newN >= len2)
		newN = len2;
	
	save = malloc(sizeof(char) * (len1 + newN + 1));

	if (save == NULL)
		return (NULL);

	while ((save[i] = s1[i]) != 0)
		i++;
	while ((save[i] = s2[i - len1]) && newN-- >= 0)
		i++;

	return (save);

}
