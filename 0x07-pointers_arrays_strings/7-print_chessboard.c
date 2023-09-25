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
		for (j = 0; j < 8; j++)
			_putchar(*(*(a) + j));
		_putchar('\n');
	}
}
