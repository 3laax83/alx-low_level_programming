#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked
 * list_t list.
 * @h: pointer to list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	for (; h != NULL; i++)
		h = h->next;

	return (i);
}
