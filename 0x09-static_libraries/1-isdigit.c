#include "main.h"
/**
 * _isdigit - checker for digit
 * @c: number
 *
 * Description: a function that checks
 * for a digit.
 *
 * Return: 1 if c is digit, 0 if not
 */
int _isdigit(int c)
{
	if (isdigit(c) != 0)
		return (1);
	else
		return (0);
}
