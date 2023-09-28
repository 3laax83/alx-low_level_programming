#include "main.h"

/**
 * _sqrt_recursion - square root counter.
 * @n: number to find its square root.
 * Description: a function that returns the natural square root of a number.
 * Return: if n >=0: square root of n, else -1.
 */

int _sqrt_recursion(int n)
{
	if (n * n == n)
		return (n);
	else if (n >= 0)
	{
		return (n / 2);
	}
	else
		return (-1);
}
