#include "main.h"
/**
 * print_square - drawer function
 * @size: size of square
 *
 * Description: a function that draws
 * a square.
 *
 * Return: None.
 */
void print_square(int size)
{
	int counter1, counter2;

	if (size > 0)
	{
	for (counter1 = 0; counter1 < size; ++counter1)
	{
		for (counter2 = 0; counter2 < size; ++counter2)
			_putchar('#');
		_putchar('\n');
	}
	}
	else
		_putchar('\n');
}
