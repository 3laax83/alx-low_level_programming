#include "main.h"

/**
 * _strpbrk -  a function that searches a string
 * for any of a set of bytes.
 * @s: pointer to string.
 * @accept: bytes to be accepted.
 * Description: The function locates the first occurrence
 * in the string s of any of the bytes in the string accept.
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	const char *p;

	while (*s)
	{
		for (p = accept; *p; p++)
			if (*s == *p)
				return ((char *)s);
		s++;
	}
	return (0);
}
