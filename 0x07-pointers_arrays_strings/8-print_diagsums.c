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
	int i, j;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += *(*(a + i) + j);
			if (i + j + 1 == size)
				sum2 += *(*(a + i) + j);
		}
	}
	printf("%d, %d", sum1, sum2);
}
