#include "variadic_functions.h"

/**
 * print_strings -  a function that prints strings
 * @separator: pointer to separator included
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = (int16_t) n;
	va_list ptr;
	char *str;

	va_start(ptr, n);

	for (; i > 0; i--)
	{
		str = va_arg(ptr, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(ptr);
	printf("\n");
}
