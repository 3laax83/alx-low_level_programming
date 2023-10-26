#include "main.h"
/**
 * print_binary - a function that prints the binary representation of a
 * number.
 * @n: a number
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(0.5 * n);
	if ((double) (n * 0.5) == (int) (n * 0.5))
		_putchar('0');
	else
		_putchar('1');
}
