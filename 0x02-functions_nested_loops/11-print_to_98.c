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
	int counter;
	if (n <= 98)
	{
	for (counter = n; counter <= 98; ++counter)
	printf("%d", counter);
	if (counter < 98)
	printf(", ");
	}
	else
	{
	for (counter = n; counter >= 98; --counter)
	{
	printf("%d", counter);
	if (counter > 98)
        printf(", ");
	}
	}
	printf("\n");
}
