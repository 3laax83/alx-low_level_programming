#include "lists.h"

/**
 * print_list - Write a function that prints all the elements of a list_t list.
 * @h: pointer to the list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
	}

	return (i);
}
