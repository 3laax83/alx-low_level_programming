#include "main.h"

/**
 * _strcat - function to merge
 * @dest: pointer to destined string
 * @src: pointer to source string
 *
 * Description: This function appends the src
 * string to the dest string, overwriting the
 * terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 *
 * Return: a pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	while (*dest++)
	;
	dest--;
	while ((*dest++ = *src++))
	;
	return (dest);
}
