#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: number of elements.
 * @size: size of an element in bytes.
 * Return: If nmemb or size is 0, then _calloc returns NULL. If malloc fails,
 * then _calloc returns NULL, else returns a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		nmemb = size = NULL;

	ptr = malloc(nmemb * size);

	if (ptr) bzero (ptr, nmemb * size);

	return (ptr);
}
