#include "./lists.h"

/**
 * delete_dnodeint_at_index - delete a node at an index
 * @head: pointer to head node
 * @index: index of node
 * Return: 1 if success, -1 otherwise
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i;

	if (!(*head))
		return (-1);
	tmp = (*head);
	if (index == 0)
	{
		*head = tmp->next;
		if (tmp->next)
			tmp->next->prev = NULL;
		free(tmp);
		return (1);
	}
	for (i = 0; tmp && i < index - 1; i++, tmp = tmp->next)
		;
	if (!tmp || !tmp->next)
		return (-1);
	if (tmp->next->next)
	{
		tmp->next = tmp->next->next;
		free(tmp->next->prev);
		tmp->next->prev = tmp;
		return (1);
	}
	else
	{
		free(tmp->next);
		tmp->next = NULL;
		return (1);
	}
	return (-1);
}
