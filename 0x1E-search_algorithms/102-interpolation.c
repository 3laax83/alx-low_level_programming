#include "search_algos.h"

/**
 * interpolation_search - a function that searches for a value in a sorted
 * array of integers using the Interpolation search algorithm
 * @array: pointer to array
 * @size: size of array
 * @value: value to search for
 * Return: index of value if found, -1 otherwise
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (!array || size < 1)
		return (-1);
	for (left = 0, right = size - 1; right >= left;)
	{
		i = left + ((double)(right - left) /
				(array[right] - array[left]) *
				(value - array[left]));

		if (i < size)
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		else
		{
			printf("Value checked array[%lu] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
