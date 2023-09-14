#include "main.h"
/**
 * print_triangle - printer function
 * @size: size of triangle's base
 *
 * Description: a function that prints
 * a triangle
 *
 * Return: None.
 */
void print_triangle(int size)
{
	int row, spaces, hashes;

	if (size > 0)
	{
	for (row = 1; row <= size; ++row)
	{
		for (spaces = size - row; space >= 1; --spaces)
			_putchar(' ');
		for (hashes = 1; hashes <= row; ++a; ++hashes)
			_putchar('#')
		_putchar('\n');
	}
	}
	else
		_putchar('\n');
}
