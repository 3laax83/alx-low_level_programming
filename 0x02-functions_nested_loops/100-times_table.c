#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_times_table: prints table
 * @n: number
 *
 * Description:  prints the n times
 * table, starting with 0.
 *
 * Return: None.
 */
void print_times_table(int n)
{
	int counter1, counter2;

	for (counter1 = 0; counter1 <= n; ++counter1)
	{
	for (counter2 = 0; counter2 <= n; ++counter2)
	{
	printf("%d", counter1*counter2);
	if (!(counter2 == n))
	printf(", ");
	}
	printf("\n");
	}
}
