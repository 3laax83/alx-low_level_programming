#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers
 * @separator: pointer to the separator included
 * @n: number of numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = (int16_t) n;
	va_list ptr;

	if (!separator || n < 0)
	va_start(ptr, n);

	for (; i > 0; i--)
	{
		printf("%d", va_arg(ptr, int));
		if (i != 1)
			printf("%s", separator);
		else
			printf("\n");
	}

	va_end(ptr);
}
