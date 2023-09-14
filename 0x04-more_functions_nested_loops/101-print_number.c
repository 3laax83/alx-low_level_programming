#include "main.h"

/**
 * print_number - printer function
 * @n: number
 *
 * Description: prints an integer
 * with _putchar only.
 *
 * Return: None.
 */

void print_number(int n)
{
	int num;

	if (n < 0)
	{
		_putchar(45);
		num = -num;
	}
	if (num / 10 >= 1)
		print_number (num / 10);
	_putchar( '0' + num % 10);
}
