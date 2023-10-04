#include "main.h"

/**
 * alloc_grid - print grid.
 * @width: width of grid.
 * @height: height of grid.
 * Description: a function that returns a pointer to
 * a 2 dimensional array of integers.
 * Return: NULL unless sucess returns grid. 
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		 array[i] = malloc(sizeof(int *) * width);
		 if (array[i] == NULL)
		{
			for (--i; i >= 0; i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	return (array);

}
