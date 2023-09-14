#include "main.h"
/**
 * print_diagonal - drawer function
 * @n: number
 *
 * Description: a function that draws
 * a diagonal line on the terminal.
 *
 * Return: None.
 */
void print_diagonal(int n)
{
	int counter1, counter2;

	if (n > 0)
	{
	for (counter1 = 0; counter1 < n; ++counter1)
	{
		for (counter2 = 0; counter2 < counter1 - 1; ++counter2)
			_putchar(' ');
		_putchar('\\');
		putchar('\n');
	}
	}
}
