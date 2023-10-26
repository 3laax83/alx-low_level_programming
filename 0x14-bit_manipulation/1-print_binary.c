#include "main.h"

char *itoa(int val, int base)
{
	static char buf[32] = {0};
	int i = 30;

	for (; val && i; --i, val /= base)
		buf[i] = "0123456789abcdef"[val % base];

	return (&buf[i+1]);
}

/**
 * print_binary - a function that prints the binary representation of a
 * number.
 * @n: a number
 */

void print_binary(unsigned long int n)
{
	char *s = itoa(n, 2);

	if (n == 0)
		_putchar('0');
	else
	{
		do
		{
			_putchar(*s);
			s++;
		} while (*s);
	}
}
