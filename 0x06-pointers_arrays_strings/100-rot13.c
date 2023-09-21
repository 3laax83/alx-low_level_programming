#include "main.h"

/**
 * leet - a function that encodes a string.
 *
 * Description: a function that encodes a
 * string using rot13.
 *
 * Return: pointer to rot13-ed string.
 */

char *rot13(char *str)
{
	char *save = str;
	char offset;

	while (*str++)
	{
		offset = (*str & 32) + 65;
		if ((*str >= 'a' && str <= 'z') || (*str >= 'A' && str <= 'Z'))
			*str = (*str - offset + 13) % 26 + offset;
		str++;
	}
	return (save);
}
