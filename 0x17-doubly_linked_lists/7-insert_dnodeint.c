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
	dlistint_t *tmp = (*h), *new;
	unsigned int i = 0;

	if (!h)
		return (NULL);
	do
	{
		if (idx == i)
		{
			if (!tmp->prev)
				return (add_dnodeint(h, n));
			if (!tmp->next)
				return (add_dnodeint_end(h ,n));
			new = malloc(sizeof(dlistint_t));
			if (!new)
				return (NULL);
			new->n = n;
			new->prev = tmp->prev;
			tmp->prev->next = new;
			tmp->prev = new;
			new->next = tmp;
			return (new);
		}
		else if (idx < i)
			break;
	} while ((tmp = tmp->next) && (++i));
	return (NULL);
}
