#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: pointer to string that stores all formats.
 */

void print_all(const char * const format, ...)
{
	int i = strlen(format);
	int j = 0;
	char *k;
	va_list ptr;

	va_start(ptr, format);
	
	while (j < i)
	{
		switch (format[j])
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
				k = va_arg(ptr, char *);
				if (k)
					printf("%s", k);
				else
					printf("(nil)");
				break;
			default:
				break;
		}
		j++;
		if (format[j] == 'c' || format[j] == 'i' || format[j] == 'f' || format[j] == 's')
			printf(", ");
	}

	va_end(ptr);
	printf("\n");
}
