#include "./search_algos.h"

/**
 * jump_search - function that searches for a value in a sorted array of
 * integers using the Jump search algorithm
 * @array: pointer to array
 * @size: size of array
 * @value: value to search for
 * Return: index of value if found, -1 otherwise
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (!array || size < 1)
		return (-1);

	step = sqrt(size), jump = 0, i = 0;

	for (; jump < size && array[jump] < value; i = jump, jump += step)
		printf("Value checked array[%lu] = [%d]\n", jump, array[jump]);

	printf("Value found between indexes [%lu] and [%lu]\n", i, jump);

	if (jump >= size - 1)
		jump = size - 1;

	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	if (array[i] == value)
		return (i);
	return (-1);
}
