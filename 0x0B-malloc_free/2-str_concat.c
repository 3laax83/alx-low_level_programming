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
	char *save;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	save = malloc (s1 * sizeof(char) + s2 * sizeof(char));
	while ((*save++ = *s1++) != '\0')
		;
	while ((*save++ = *s2++) != '\0')
		;
	return (save);
}
