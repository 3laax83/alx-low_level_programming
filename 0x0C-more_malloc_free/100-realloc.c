#include "main.h"

/**
 * _realloc - a function that reallocates a memory block using malloc and free.
 * @ptr: pointer to array of memory block.
 * @old_size: the size to be changed.
 * @new_size: the new size of the block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newData = NULL;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(old_size));

	newData = malloc(new_size);

	if (newData == NULL)
		return (NULL);

	bzero(newData, new_size);
	memcpy(newData, ptr, old_size);
	free(ptr);

	return (newData);
}
