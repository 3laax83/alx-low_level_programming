#include "main.h"

/**
 * array_range - a function that creates an array of integers.
 * @min: minimum integer.
 * @max: maximum integer.
 * Return: the pointer to the newly created array
 * If min > max, return NULL, If malloc fails, return NULL.
 */


int *array_range(int min, int max)
{
	int counter;
	int *buffer;

	if (min > max)
		return (NULL);

	buffer = malloc(sizeof(int) * (max - min + 1));

	if (buffer == NULL)
		return (NULL);

	for (counter = 0; min <= max; counter++, min++)
		buffer[counter] = min;

	return (buffer);
}
