#include "main.h"
/**
 * print_binary - a function that prints the binary representation of a
 * number.
 * @n: a number
 */

void print_binary(unsigned long int n)
{
	double mod;

	mod = (double) (n * 0.5) - (int) (n * 0.5);
	if (n > 1)
		print_binary(n * 0.5);
	if (mod == 0)
		_putchar('0');
	else
		_putchar('1');
}
