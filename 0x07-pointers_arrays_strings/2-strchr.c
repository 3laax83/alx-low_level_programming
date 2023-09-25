#include "main.h"

/**
 * _strchr - character locator.
 * @s: pointer to string.
 * @c: the character to be located.
 * Description: a function that locates a character in a string.
 * Return: a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (char *) s;
	} while (*s++);
	return (0);
}
