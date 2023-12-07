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
	dlistint_t *tmp;

	if (*h)
		tmp = (*h);
	do {
		if (idx == 1)
		{
			if (!tmp->prev)
				return (add_dnodeint(h, n));
			if (!tmp->next)
				return (add_dnodeint_end(h, n));
			dlistint_t *new = malloc(sizeof(dlistint_t));

			if (!new)
				return (NULL);
			new->n = n;
			tmp->prev->next = new;
			new->next = tmp;
			tmp->prev = new;
			new->prev = tmp->prev;
			return (new);
		}
	} while (tmp->next && (tmp = tmp->next) && (--idx));
	return (NULL);
}
