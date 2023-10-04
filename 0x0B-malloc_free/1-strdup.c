#include "main.h"

/**
 * _strdup - a copy container
 * @str: pointer to string.
 * Description: a function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the 
 * string given as a parameter.
 * Return: a pointer to a new string which is a duplicate of the 
 * string str, NULL if str = NULL or failed.
 */

char *_strdup(char *str)
{
	size_t len;
	char *copy;

	len = strlen(str) + 1;
	if (!(copy = malloc((u_int) len))
			return (NULL);
	memcpy(copy, str, len);
	return (copy);
}
