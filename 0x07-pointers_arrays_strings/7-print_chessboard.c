#include "main.h"

/**
 * print_chessboard - prints 2D array.
  * @a: pointer to array a.
 * Description: a function that prints the chessboard.
 */

void print_chessboard(char (*a)[8])
{
	for (; *a; a++)
	{
		int *(*arr) = (*a)[8];

		for (; *arr; arr++)
			_putchar(*arr);
		_putchar('\n');
	}
}
