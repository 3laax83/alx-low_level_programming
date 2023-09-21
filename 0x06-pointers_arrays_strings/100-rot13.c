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
	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int counter;

	while (*str++)
	{
		for (counter = 0; counter < 52; counter++)
			if (*(str + counter) == *(input + counter))
				*(str + counter) = *(output + counter);
	}
	return (save);
}
