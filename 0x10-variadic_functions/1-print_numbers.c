#include "variadic_functions.h"

/**
 * prnt - print seperator
 * @str: pointer to string
 */

void prnt(char *str)
{
	int i = 0;

	for (; str[i] != 0; i++)
		_putchar(str[i]);
}


/**
 * print_numbers - a function that prints numbers
 * @separator: pointer to the separator included
 * @n: number of numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = (int16_t) n;

	va_list ptr;
	va_start(ptr, n);

	for(;i > 0; i--)
		prnt(va_arg(ptr, int));

	va_end(ptr);
}
