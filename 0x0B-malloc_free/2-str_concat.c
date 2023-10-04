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
	char *save = s1;
	int size1 = 0, size2 = 0;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (; *s1; ++s1)
		size1++;
	for (; *s2; ++s2)
		size2++;
	save = malloc (size1 * sizeof(char) + size2 * sizeof(char));
	if (save == 0)
		return (NULL);
	while ((*s1++ = *s2++) != '\0')
		;
	return (save);
}
