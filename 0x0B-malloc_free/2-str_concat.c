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

	for (; *s1 != '\0'; s1++)
		size1++;
	for (; *s2; s2++)
		size2++;

	size = (char *) malloc(size1 + size2);
	while ((*save++ = *s1++) != '\0')
	;
	for (; *save; save++)
	;
	while ((*save++ = *s2++))
	;
	return (save);
}
