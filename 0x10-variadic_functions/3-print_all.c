#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: pointer to string that stores all formats.
 */

void print_all(const char * const format, ...)
{
	const char *i = format;
	char *j;
	va_list ptr;

	va_start(ptr, format);
	
	while (*i)
	{
		switch (*i)
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
					j = va_arg(ptr, char*);
					if (j == NULL)
					{
						printf("(nil)");
						break;
					}
					printf("%s", j);
					break;
				}
			default:
				break;

		}
		i++;
		if (*i && (*i == 'c' || *i == 'i' || *i == 'f' || *i == 's'))
			printf(", ");
	}
	va_end(ptr);
	printf("\n");
}
