#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: pointer to string that stores all formats.
 */

void print_all(const char * const format, ...)
{
	char *i;
	char *j = (char *) format;
	va_list ptr;

	va_start(ptr, format);
	
	while (*j != 0)
	{
		switch (*j)
		{
			case 'c':
				printf("%c", va_arg(ptr, int));
				break;
			case 'i':
				printf("%d", va_arg(ptr, int));
				break;
			case 'f':
				printf("%f", va_arg(ptr, double));
				break;
			case 's':
				{
					i = va_arg(ptr, char *);
					if (i == NULL)
						printf("(nil)");
					else
						printf("%s", i);
					break;
				}
			default:
				break;
		}
		j++;
		if (*j == 'c' || *j == 'i' || *j == 'f' || *j == 's')
				printf(", ");

	}
	va_end(ptr);
	printf("\n");
}
