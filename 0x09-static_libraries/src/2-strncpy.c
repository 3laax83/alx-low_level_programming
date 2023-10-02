#include "main.h"

/**
 *_strncpy - a function that copies a string.
 * @dest: pointer to destined.
 * @src: pointer to source.
 * @n: number of bytes copied.
 *
 * Description: this function should work
 * exactly like strncpy.
 *
 * Return: pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	if (n != 0)
	{
	char *d = dest;
	const char *s = src;
		do {
			char x = (*d++ = *s++);

			if (x == 0)
			{
				while (--n != 0)
					*d++ = 0;
				break;
			}
		} while (--n != 0);
	}
	return (dest);
}
