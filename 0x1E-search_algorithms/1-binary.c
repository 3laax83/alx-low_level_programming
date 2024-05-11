#include "./search_algos.h"
#include <stdio.h>

/**
 * print_array - function to print array
 * @array: pointer to array
 * @low: start of array
 * @high: end of array
 */

void print_array(int *array, size_t low, size_t high) {
  size_t i;

  for (i = low; i < high; i++) {
    printf("%d, ", *(array + i));
  }
  printf("%d\n", *(array + high));
}
/*
 * binary_search - a function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: pointer to array.
 * @size: size of array
 * @value: value to search for
 * Return: index of value if found, -1 otherwise
 */

int binary_search(int *array, size_t size, int value) {
  size_t i, low, high;

  if (!array || size < 1)
    return (-1);

  low = 0, high = size - 1;

  for (i = (high) / 2; low <= high; i = (low + high) / 2) {
    printf("Searching in array: ");
    print_array(array, low, high);
    if (value > *(array + i))
      low = i + 1;
    else if (value < *(array + i))
      high = i - 1;
    else
      return (i);
  }

  return (-1);
}
