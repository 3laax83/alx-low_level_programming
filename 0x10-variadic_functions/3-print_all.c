#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: pointer to string that stores all formats.
 */

void print_all(const char * const format, ...)
{
	char *i = format, *j;
	va_list ptr;

	va_start(ptr, format);
	
	while (*i++)
	{
		switch (*i)
		{
			case 'c':
				printf("%c", va_arg(ptr, char));
			case 'i':
				printf("%d", va_arg(ptr, int));
			case 'f':
				printf("%f", va_arg(ptr, float));
			case 's':
				{
					a = va_arg(ptr, char*);
					if (a == NULL)
						printf("(nil)"), break;
					printf("%s", a);
				}
			default:
				break;

		}
		if (*b && (*b == 'c' || *b == 'i' || *b == 'f' || *b == 's'))
			printf(", ");
	}
	printf("\n");
}
