#include "./lists.h"

/**
 * insert_dnodeint_at_index - add a node at an index
 * @h: pointer to head
 * @idx: the index
 * @n: value to be stored in new node
 * Return: the new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new = malloc(sizeof(dlistint_t));
	unsigned int index = 0;

	if (!new)
		return (NULL);
	if (*h)
		tmp = (*h);
	do {
		if (index == idx)
		{
			if (!tmp->prev)
			{
				free(new);
				return (add_dnodeint(h, n));
			}
			if (!tmp->next)
			{
				free(new);
				return (add_dnodeint_end(h, n));
			}
			new->n = n;
			tmp->prev->next = new;
			new->next = tmp;
			tmp->prev = new;
			new->prev = tmp->prev;
			return (new);
		}
		++index;
	} while (tmp->next && (tmp = tmp->next));
	return (NULL);
}
