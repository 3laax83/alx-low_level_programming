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
	int counter1, counter2, result;

	for (counter1 = 0; counter1 <= 9; ++counter1)
	{
	for (counter2 = 0; counter2 <= 9; ++counter2)
	{
	result = counter1*counter2;
	_putchar('0' + result);
	_putchar(',');
	_putchar(' ');
	}
	putchar('\n');
	}
}
