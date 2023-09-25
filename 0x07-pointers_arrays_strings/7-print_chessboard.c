#include "main.h"

/**
 * print_chessboard - prints 2D array.
  * @a: pointer to array a.
 * Description: a function that prints the chessboard.
 */

void print_chessboard(char (*a)[8])
{
	char *p;
	int counter = 0;

	for (p = &a[0][0]; p <= &a[7][7]; p++)
	{
		_putchar(*p);
		if (counter < 7)
			counter++;
		else
		{
			counter = 0;
			_putchar('\n');
		}
	}
}
