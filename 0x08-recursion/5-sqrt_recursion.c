#include "main.h"

/**
 * _sqrt_recursion - square root counter.
 * @n: number to find its square root.
 * Description: a function that returns the natural square root of a number.
 * Return: if n >=0: square root of n, else -1.
 */

int _sqrt_recursion(int n)
{
	if (_sqrt_recursion(n) * _sqrt_recursion(n) == n)
		return (_sqrt_recursion(n));
	else if (_sqrt_recursion(n) * _sqrt_recursion(n) > n)
		return (_sqrt_recursion(n) / 2);
	else:
		return (-1);
}
