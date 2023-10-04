#include "main.h"

/**
 * *create_array - function to create array.
 * @size: size of array.
 * @c: a specific char.
 * Description: a function that creates an array of chars,
 * and initializes it with a specific char.
 * Return: (NULL) if size = 0 or failed, a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);
	else
	{
		array = (char *) malloc(sizeof(char) * size);
		if (array != NULL)
		{
			for (i = 0; i < size; i++)
				array[i] = c;
		}
	}
	return (array);
}
