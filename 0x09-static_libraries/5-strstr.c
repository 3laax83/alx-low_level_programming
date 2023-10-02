#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: pointer to string.
 * @needle: pointer to substring.
 * Description: The  function finds the first occurrence of
 * the substring needle in the string haystack. The terminating
 * null bytes (\0) are not compared.
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	const char *p, *q;

	for (; *haystack; haystack++)
	{
		p = haystack, q = needle;
		while (*q && *p)
		{
			if (*q != *p)
				break;
			p++, q++;
		}

		if (*q == 0)
			return ((char *)haystack);
	}
	return (0);
}
