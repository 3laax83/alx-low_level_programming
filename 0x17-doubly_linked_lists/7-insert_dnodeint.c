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
	unsigned int i = 0;

	if (!h || !new)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (tmp)
	{
		if (!tmp->next && i == idx - 1)
			return (add_dnodeint_end(h, n));
		if (idx - 1 == i)
		{
			new->n = n;
			new->next = tmp->next;
			new->prev = tmp;
			tmp->next->prev = new;
			tmp->next = new;
			return (new);
		}
		i++;
		tmp = tmp->next;
	}
	free(new);
	return (NULL);
}
