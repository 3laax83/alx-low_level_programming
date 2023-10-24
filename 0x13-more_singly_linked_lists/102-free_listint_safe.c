#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: pointer to h
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *node;
	size_t length = 0, loop = 1;

	if (*h == NULL)
		return (0);

	node = find_listint_loop(*h);
	for (; *h && (*h != node || loop); *h = next, ++length, next = (*h)->next)
	{
		if (*h == node && loop)
		{
			if (node == node->next)
			{
				free(*h);
				break;
			}
			length++;
			next = next->next;

			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (length);
}
