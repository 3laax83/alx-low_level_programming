#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_to_98 -  prints natural numbers
 * @n: number
 *
 * Desciption: prints all natural
 * numbers from n to 98.
 *
 * Return: None.
 */
void print_to_98(int n)
{
	while (n < 98)
	{
	printf("%d", n);
	if (n != 98)
	{
	printf(", ");
	}
	++n;
	}
	while (n > 98)
	{
	printf("%d", n);
	if (n != 98)
        {
	printf(", ");
	}
	--n;
	}
	printf("\n");
}
