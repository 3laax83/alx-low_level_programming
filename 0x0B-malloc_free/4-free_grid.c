#include "main.h"

/**
 * free_grid - grid freer.
 * @grid: pointer to array grid.
 * @height: height to array.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
