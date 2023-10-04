#include "main.h"

/**
 * str_concat - strings concatenater.
 * @s1: pointer to string.
 * @s2: pointer to string.
 * Description: a function that concatenates two strings.
 * Return: NULL if passed or failure, if success a pointer
 * to allocation in memory that holds content of s1 & s2.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, size1 = 0, size2 = 0;
	char *save;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++])
			size1++;
	}
	if (s2 != NULL)
	{
		j = 0;
		while (s2[j++])
			size2++;
	}

	save = (char *) malloc(1 + size1 + size2);
	if (save == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		save[i] = s1[i];
	for (j = 0; j < size2; j++)
		save[i + j] = s2[j];
	return (save);
}
