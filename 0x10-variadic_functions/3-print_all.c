#include "variadic_functions.h"


void print_all(const char * const format, ...)
{
	int i = strlen(format) - 1;
	char *j, *sep = ", ";
	int k = 0;
	va_list ptr;

	va_start(ptr, format);

	while (format && format[k])
	{
		if (k == i)
			sep = "";
		switch(format[k])
		{
			case 99:
				printf("%c%s", va_arg(ptr, int), sep);
				break;
			case 105:
				printf("%d%s", va_arg(ptr, int), sep);
				break;
			case 102:
				printf("%f%s", va_arg(ptr, double), sep);
				break;
			case 115:
				j = va_arg(ptr, char*);
				if (j == NULL)
					j = "(nil)";
				printf("%s%s", j, sep);
				break;
			default:
				break;
		}
		k++;
	}
	va_end(ptr);
	printf("\n");
}
