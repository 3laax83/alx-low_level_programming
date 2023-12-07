#include "./lists.h"

/**
 * add_dnodeint_end - add a new node in a list's end
 * @head: pointer to head node
 * @n: value to be stored in node
 * Return: new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if ((*head))
	{
		for (; (*head)->next; (*head) = (*head)->next)
			;
		new->prev = (*head);
		(*head)->next = new;
		for (; (*head)->prev; (*head) = (*head)->prev)
			;
	}
	else
	{
		(*head) = new;
		new->prev = NULL;
	}

	return (new);
}
