#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int.
 * @b: pointer to binary number string
 * Return: the converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1 b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, count = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; ++i)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (; i >= 0; i--)
	{
		if (b[i] == '1')
			sum += count;
		if (count == 0)
			count++;
		else
			count *= 2;
	}

	return (sum);
}
