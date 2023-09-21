#include "main.h"

/**
 * *string_toupper - converter function.
 *
 * Description: a function that changes all
 * lowercase letters of a string to uppercase.
 *
 * Return: Upper case string.
 */

char *string_toupper(char *str)
{
	char *save = str;
	for (; *(str + 1); str++)
		*str = toupper(*str);
	return (save);
}
