#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: number 1
 * @m: number 2
 * Return:  the number of bits you would need to flip to get from one number
 * to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int counter = 0;
	int i = 63;
	unsigned long int current, xor = n ^ m;

	do
	{
		current = xor >> i;
		if (current & 1)
			counter++;
		i--;
	} while (i > 0);

	return (count);
}
