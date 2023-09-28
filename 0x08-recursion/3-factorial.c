#include "main.h"

/**
 * factorial - factorial counter
 * @n: number to count its factorial.
 * Description: a function that returns the factorial of a given number.
 * Return: factorial of n.
 */

int factorial(int n)
{
	if (n > 0)
		return (n * factorial(n -1));
	else if (n == 0)
		return (1);
	else
		return (-1);
}
