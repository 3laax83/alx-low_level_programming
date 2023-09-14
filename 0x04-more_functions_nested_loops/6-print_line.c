#include "main.h"
/**
 * print_line - drawer function
 * @n: number
 *
 * Description: a function that draws
 * a straight line in the terminal.
 *
 * Return: None.
 */
void print_line(int n)
{
	int counter;

	for (counter = 0; counter < n; ++counter)
		_putchar('_');
	putchar('\n');
}
