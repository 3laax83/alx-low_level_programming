#include "main.h"

/**
 * cap_string - a function that capitalizes
 * all words of a string.
 * @str: pointer to string.
 *
 * Description: Separators of words:
 * space, tabulation, new line, ,, ;,
 * ., !, ?, ", (, ), {, and }
 *
 * Return: pointer to string.
 */

char *cap_string(char *str)
{
	char *save = str;

	while (*str++)
	{
		if (*str == ' ' || *str <= '\n')
			if (*(str + 1) >= 'a' && *(str + 1) <= 'z')
				*(str + 1) = *(str + 1) - 32;
		if (*str == '\t' || *str == ',')
			if (*(str + 1) >= 'a' && *(str + 1) <= 'z')
				*(str + 1) = *(str + 1) - 32;
		if (*str == '.' || *str == ';')
			if (*(str + 1) >= 'a' && *(str + 1) <= 'z')
				*(str + 1) = *(str + 1) - 32;
		if (*str == '!' || *str == '?')
			if (*(str + 1) >= 'a' && *(str + 1) <= 'z')
				*(str + 1) = *(str + 1) - 32;
		if (*str == '(' || *str == '"')
			if (*(str + 1) >= 'a' && *(str + 1) <= 'z')
				*(str + 1) = *(str + 1) - 32;
		if (*str == ')' || *str == '{')
			if (*(str + 1) >= 'a' && *(str + 1) <= 'z')
				*(str + 1) = *(str + 1) - 32;
		if (*str == '}')
			if (*(str + 1) >= 'a' && *(str + 1) <= 'z')
				*(str + 1) = *(str + 1) - 32;
	}
	return (save);
}
