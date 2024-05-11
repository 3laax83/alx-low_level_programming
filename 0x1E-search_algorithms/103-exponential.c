#include "search_algos.h"
#include "1-binary.c"

/**
 * exponential_search - a function that searches for a value in a sorted
 * array of integers using the Exponential search algorithm
 * @array: pointer to array
 * @size: size of array
 * @value: value to search for
 * Return: index of value if found, -1 otherwise
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i, r;
	int rtn;

	if (!array || size < 1)
		return (-1);
	if (array[0] != value)
		for (i = 1; i < size && array[i] <= value; i *= 2)
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	if (i < size)
		r = i;
	else
		r = size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", i / 2, r);

	rtn = binary_search(array + i / 2, r - i / 2 + 1, value);
	if (rtn == -1)
		return (-1);
	else
		return (i / 2 + rtn);
}
