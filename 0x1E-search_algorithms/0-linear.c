#include "./search_algos.h"

/**
 * linear_search - a function that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: pointer to array
 * @size: size of array
 * @value: value to search for
 */

int linear_search(int *array, size_t size, int value) {
  size_t i;

  if (!array)
	return (-1);

  for (i = 0; i < size; i++) {
	printf("Value checked array[%lu] = [%d]\n", i, *(array + i));
	if (*(array + i) == value) {
	  return (i);
	}
  }
  return (-1);
}
