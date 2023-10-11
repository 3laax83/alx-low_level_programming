#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: pointer to the array to be searched.
 * @size: size of array.
 * @cmp: pointer to function of comparing.
 * Return: If no element matches or size<=0 return -1
 * else return the index of the first element for which the
 * cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array || !cmp || size <= 0)
		return (-1);

	while (size--)
		if (cmp(array[i++]))
			return (i - 1);

	return (-1);
}
