#include "main.h"

/**
 * print_chessboard - prints 2D array.
  * @a: pointer to array a.
 * Description: a function that prints the chessboard.
 */

void print_chessboard(char (*a)[8])
{
	int counter;

	for (; *a; a++)
	{
		for (counter = 0; counter < 8; ++counter)
			printf("%c", a[counter]);
	}
}
