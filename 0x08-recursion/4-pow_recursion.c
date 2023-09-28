#include "main.h"

/**
 * _pow_recursion - counts x ** y.
 * @x: number.
 * @y: the power.
 * Description: a function that returns the value
 * of x raised to the power of y.
 * Return: x ** y if y >= 0, else -1
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x *  _pow_recursion(x, y - 1));
	else if (y == 0)
		return (1);
	else
		return (-1);
}
