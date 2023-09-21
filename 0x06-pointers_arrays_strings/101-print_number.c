#include "main.h"

/**
 * print_number - printer function
 * @n: number to print
 *
 * Description: a function that prints an integer.
 *
 * Return: None.
 */

void print_number(int n)
{
	char *num = n;

	for(; *num; num++)
	{
		_putchar(*num);
	}
}
