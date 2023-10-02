#include "main.h"

/**
 *_strcmp - a function that compares two strings
 * @s1 : pointer to string 1.
 * @s2: pointer to string 2.
 *
 * Description: this function should work exactly
 * like strcmp.
 *
 * Return: result of comparison.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2++)
		if (*s1++ == 0)
			return (0);
	return (*(unsigned char *)s1 - *(unsigned char *) --s2);
}
