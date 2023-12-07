#include "./lists.h"

/**
 * get_dnodeint_at_index - to fetch the node in index'th position
 * @head: pointer to head node
 * @index: self-explanatory
 * Return: the node at index if found, NULL otherwise
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;
	dlistint_t *tmp = head;

	if (!head)
		return (NULL);
	do {
		if (index == idx)
			return (tmp);
		else if (idx < index)
			idx += 1;
	} while (tmp->next && (tmp = tmp->next));
	return (NULL);
}
