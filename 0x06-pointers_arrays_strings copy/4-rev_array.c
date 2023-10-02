#include "main.h"

/**
 * swap - swapper function
 * @a: number1.
 * @b: number2.
 *
 * Description: swap 2 numbers
 *
 * Return: None.
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * reverse_array - reverser function.
 * @a: pointer to array.
 * @n: number of elements.
 *
 * Description: a function that reverses
 * the content of an array of integers.
 *
 * Return: None.
 */


void reverse_array(int *a, int n)
{
	int *pointer1 = a;
	int *pointer2 = a + n - 1;

	while (pointer1 < pointer2)
	{
		swap(pointer1, pointer2);
		pointer1++;
		pointer2--;
	}
}
