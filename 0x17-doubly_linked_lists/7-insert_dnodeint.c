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

	if (idx == 0)
		return (add_dnodeint(h, n));
	do
	{
		if (!tmp)
			return (NULL);
		tmp = tmp->next;
		--idx;
	} while (idx > 0);
	if (!tmp->next)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	tmp->prev->next = new;
	new->prev = tmp->prev;
	new->next = tmp;
	tmp->prev = new;
	return (new);
}
