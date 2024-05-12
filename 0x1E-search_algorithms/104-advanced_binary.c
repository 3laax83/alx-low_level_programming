#include "1-binary.c"
#include "search_algos.h"

/**
 * advanbin - to help advanced_binary
 * @array: pointer to array
 * @size: size of array
 * @value: value to search for
 * Return: pointer to value found, NULL otherwise
 */

int *advanbin(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size < 1)
		return (NULL);

	printf("Searching in array: ");
	print_array(array, 0, size - 1);

	i = (size - 1) / 2;

	if (value > *(array + i))
		return (advanbin(array + i + 1, size - i - 1, value));
	else if (value < *(array + i))
		return (advanbin(array, i, value));

	if (i)
		return (advanbin(array, i + 1, value));
	return (array + i);
}

/**
 * advanced_binary - You may have noticed that the basic binary search does
 * not necessarily return the index of the first value in the array (if this
 * value appears more than once in the array). In this exercise, you’ll have
 * to solve this problem.
 * @array: pointer to array
 * @size: size of array
 * @value: value to search for
 * Return: index of value if found, -1 otherwise
 */

int advanced_binary(int *array, size_t size, int value)
{
	int *i = NULL;

	if (!array || size < 2)
		return (-1);

	i = advanbin(array, size, value);

	if (i)
		return (i - array);
	return (-1);
}
