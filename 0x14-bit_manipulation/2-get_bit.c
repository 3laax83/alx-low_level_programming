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
	if (index > 8 * sizeof(unsigned long int) - 1)
		return (-1);
	if ((1 << index)  == (n & (1 << index)))
		return (1);
	return (0);
}
