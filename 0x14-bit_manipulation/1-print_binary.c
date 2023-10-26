#include "main.h"
/**
 * print_binary - a function that prints the binary representation of a
 * number.
 * @n: a number
 */

void print_binary(unsigned long int n)
{
	int i = 0;
	double mod;
	char buf[32] = {0};

	do
	{
		mod = (double) (n * 0.5) - (int) (n * 0.5);
		if (mod == 0)
			buf[i++] = '0';
		else
			buf[i++] = '1';
		n = (int) (n * 0.5);
	} while (n >= 1);

	for (; i >= 0; i--)
		_putchar(buf[i]);
}
