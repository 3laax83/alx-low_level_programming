#include "main.h"

/**
 * malloc_checked -  a function that allocates memory using malloc.
 * @b: number of bytes to be allocated.
 * Return: a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (b == NULL)
		exit(98);
	return (ptr);
}
