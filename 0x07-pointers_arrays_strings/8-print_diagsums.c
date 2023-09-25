#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the
 * two diagonals of a square matrix of integers.
 * @a: pointer to an array of 2D.
 * @size: width/height of square.
 * Description: sums the first diagonal where i=j, and
 * the second where i+j+1 = size.
 */

void print_diagsums(int *a, int size)
{
	int i;
	unsigned long sum1 = 0, sum2 = 0;

	for (i = 0; i < size * size; i++)
	{
		if (i % (size - 1) == 0 && i <= size * (size - 1))
		{
			sum1 += *(a + i);
		}
		if (i % (size + 1) == 0)
		{
                        sum2 += *(a + i);
		}
	}
	printf("%lu, %lu\n", sum2, sum1);
}
