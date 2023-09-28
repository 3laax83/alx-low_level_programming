#include "main.h"

/**
 * _sqrt - to find square root
 * @num1: integer.
 * @num2: integer.
 * Description: a function to store value of n.
 * Return: Square root of n
*/

int _sqrt(int num1, int num2)
{
	if (num2 * num2 == num1)
		return (num2);
	else (num2 * num2 > num1)
		return (-1);
	_sqrt(num1, num2 + 1);
}


/**
 * _sqrt_recursion - square root counter.
 * @n: number to find its square root.
 * Description: a function that returns the natural square root of a number.
 * Return: if n >=0: square root of n, else -1.
 */

int _sqrt_recursion(int n)
{
	return(_sqrt(n, 0));
}
