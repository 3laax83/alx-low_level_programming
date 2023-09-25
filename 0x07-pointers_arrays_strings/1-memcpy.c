#include "main.h"

/**
 * _memcpy - copier function.
 * @dest: pointer to destined.
 * @src: pointer to source memory area.
 * @n: number of bytes.
 * Description: a function that copies memory area.
 * Return: a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	bcopy(src, dest, n);
	return (dest);
}
