#include "main.h"
/**
 * print_binary - a function that prints the binary representation of a
 * number.
 * @n: a number
 */

void print_binary(unsigned long int n)
{
	double mod;
	int intn;

	intn = (n * 0.5);
	if (n > 1)
		print_binary(intn);
	mod = (n * 0.5) - (int) (n * 0.5);
	if (mod == 0)
	{
		_putchar('0');
		return;
	}
	else
	{
		_putchar('1');
		return;
	}
}
