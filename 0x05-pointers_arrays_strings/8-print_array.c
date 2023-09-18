#include "main.h"

/**
 * print_array - printer function
 * @a: pointer to array.
 * @n: number of elements.
 *
 * Description: a function that
 * prints n elements of an array
 * of integers.
 *
 * Return: None.
 */

void print_array(int *a, int n)
{
	int length = 0;

	for (; length < n; ++length)
	{
		printf("%d", a[length]);
		if (length != (n-1))
			printf(", ");
	}
	printf("\n");
}
