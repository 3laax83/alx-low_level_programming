#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * times_table -  prints the 9 times
 * tables
 *
 * Description:  prints the 9 times
 * table, starting with 0.
 *
 * Return: None;
 */
void times_table(void)
{
	int counter1, counter2;

	for (counter1 = 0; counter1 <= 9; ++counter1)
	{
	for (counter2 = 0; counter2 <= 9; ++counter2)
	{
	if (counter1*counter2 < 10)
	_putchar(' ');
	else
	_putchar('0' + counter1*counter2 / 10);
	_putchar('0' + counter1*counter2 % 10);
	if (counter2 != 9)
	_putchar(',');
	_putchar(' ');
	}
	_putchar('\n');
	}
}
