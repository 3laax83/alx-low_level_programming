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
	char *save = NULL;
	int size1 = 0, size2 = 0;
	int i, j;

	if (s1 == 0)
		s1 = "";
	for (; *s1 != '\0'; ++s1)
		size1++;

	if (s2 == 0)
		s2 = "";
	for (; *s2; ++s2)
		size2++;

	save = (char *) malloc(1 + size1 + size2);
	if (save == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		save[i] = s1[i];
	for (j = 0; j < size2; j++, i++)
		save[i] = s2[j];

	return (save);
}
