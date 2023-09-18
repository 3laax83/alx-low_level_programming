#include "main.h"

/**
 * _strcpy - printer function
 * @dest: to copy to.
 * @src: to copy from.
 *
 * Description: a function that
 * copies the string pointed to
 * by src.
 *
 * Return: return value as dest.
 */

char *_strcpy(char *dest, char *src)
{
	*dest = *strcpy(dest, src);
	return (dest);
}
