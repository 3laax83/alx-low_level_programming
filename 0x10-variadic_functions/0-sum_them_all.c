#include "variadic_functions.h"

/**
 * sum_them_all - to sum undefined set of numbers
 * @n: value of a number
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = (int16_t) n;

	va_list ptr;

	va_start(ptr, n);

	for (; i > 0; i--)
		sum += va_arg(ptr, int);

	va_end(ptr);

	return (sum);
}
