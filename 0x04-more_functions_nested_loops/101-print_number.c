#include "main.h"

/**
 * print_number: printer function
 * @n: number
 *
 * Description: prints an integer
 * with _putchar only.
 *
 * Return: None.
 */

void print_number(int n)
{
	char strng[4];
	int counter;

	sprintf(strng, "%d", n);
	_putchar('\n');
}
