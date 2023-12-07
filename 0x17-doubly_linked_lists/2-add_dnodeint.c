#include "./lists.h"

/**
 * add_dnodeint - function to add a new node in the beginning
 * @head: pointer to head node (if any)
 * @n: number to be stored in node
 * Return: pointer to new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->prev = NULL;
	new->n = n;
	new->next = *head;

	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
