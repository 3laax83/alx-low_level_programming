#include "main.h"

/**
 * _memset - memory filler.
 * @s: pointer to destined.
 * @b: constant byte.
 * @n: number of bytes.
 * Description: a function that fills memory
 * with a constant byte.
 * Return: pointer to memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	register unsigned char *dest = (unsiged char *) s;

	while (len-- > 0)
		*dest++ = b;
	return (s);
}
