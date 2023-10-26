#include "main.h"
#include <string.h>
/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n : number
 * @index: index
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index > 8 * sizeof(unsigned long int) - 1)
		return (-1);
	i = 1 << index;
	if (i  == (n & i))
		return (1);
	return (0);
}
