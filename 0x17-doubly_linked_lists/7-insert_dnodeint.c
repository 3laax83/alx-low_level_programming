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
	dlistint_t *tmp = (*h), *new = malloc(sizeof(dlistint_t));
	unsigned int index = 0;

	if (!new)
		return (NULL);
	do {
		if (index == idx)
		{
			if (!tmp->prev)
				return (add_dnodeint(&new, n));
			if (!tmp->next)
				return (add_dnodeint_end(&new, n));
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
