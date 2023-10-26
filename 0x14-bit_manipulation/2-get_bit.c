#include "main.h"

char *itoa(int val, int base)
{
	static char buf[32] = {0};
	int i = 30;

	for (; val && i; --i, val /= base)
		buf[i] = "0123456789abcdef"[val % base];

	return (&buf[i + 1]);
}

/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n : number
 * @index: index
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	char *s = itoa(n, 2);

	if (s[index])
		return (s[index] - '0');
	else
		return (-1);
}
