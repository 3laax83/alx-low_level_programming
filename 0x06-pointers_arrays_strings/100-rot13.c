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
	char *letter = "abcdefghijklmnopqrstuvwxyz";
	char *rot = "nopqrstuvwxyzabcdefghijklm";
	int counter;

	for (; *str; str++)
	{
		for (counter = 0; counter < 26; counter++)
		{
			if (*str == *(letter + counter))
				*str = *(rot + counter);
			if (*str == *(letter + counter) - 32)
				*str = *(rot + counter) - 32;
		}
	}
	return (save);
}
