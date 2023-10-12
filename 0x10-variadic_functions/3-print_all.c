#include "variadic_functions.h"


void print_all(const char * const format, ...)
{
	char *i = (char *) format;
	char *k;
	va_list ptr;

	va_start(ptr, format);

	while (format && *i)
	{
		switch(*i)
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
				k = va_arg(ptr, char*);
				if (!k)
					{
						printf("(nil)");
						break;
					}
				printf("%s", k);
				break;
			default:
				break;
		}
		i++;
		if (*i)
			printf(", ");
	}
	va_end(ptr);
	printf("\n");
}
