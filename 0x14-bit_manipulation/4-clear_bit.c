#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n : pointer to n
 * @index: self-explanatory
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 8 * sizeof(n) - 1)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
