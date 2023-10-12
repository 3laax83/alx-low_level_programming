#include "variadic_functions.h"


void print_all(const char * const format, ...)
{
	char *i = "cifs";
	char *j;
	int k = 0;
	va_list ptr;

	va_start(ptr, format);

	while (format && format[k])
	{
		switch(format[k])
		{
			case 99:
				printf("%c", va_arg(ptr, int));
				break;
			case 105:
				printf("%d", va_arg(ptr, int));
				break;
			case 102:
				 printf("%f", va_arg(ptr, double));
				break;
			case 115:
				j = va_arg(ptr, char*);
				if (!j)
					{
						printf("(nil)");
						break;
					}
				printf("%s", j);
				break;
			default:
				break;
		}
		k++;
		if (format[k] && strchr(i, format[k]) == 0)
			printf(", ");
	}
	va_end(ptr);
	printf("\n");
}
