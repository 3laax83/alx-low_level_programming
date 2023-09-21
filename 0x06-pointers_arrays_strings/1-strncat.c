#include "main.h"

/**
 * _strncat -  a function that
 * concatenates two strings.
 * @dest: pointer to destined.
 * @src: pointer to source.
 * @n: maximum numbers of src chars.
 *
 * Description: The _strncat function is
 * similar to the _strcat function, except that:
 * it will use at most n bytes from src and
 * src does not need to be null-terminated
 * if it contains n or more bytes
 *
 * Return: a pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	if (n != 0)
	{
		char *d = dest;
		const char *s = src;

		while (*d != 0)
			d++;

		do {
			if ((*d = *s++) == 0)
				break;
			d++;
		} while (--n != 0);
		*d = 0;
	}
	return (dest);
}
