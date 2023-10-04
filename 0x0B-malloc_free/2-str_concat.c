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
	int size1 = 0, size2 = 0;

	if (s1 == NULL)
		s1 = "";
	else
	{
		for (; *s1; ++s1)
                	size1++;
	}
	if (s2 == NULL)
		s2 = "";
	else
	{
		for (; *s2; ++s2)
			size2++;
	}
	save = (char *)malloc(1 + size1 + size2);
	if (save == 0)
		return (NULL);
	while ((*save++ = *s1++))
		;
	while ((*save++ = *s2++))
                ;
	return (save);
}
