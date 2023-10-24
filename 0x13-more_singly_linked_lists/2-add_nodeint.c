#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning of a
 * listint_t list.
 * @head: pointer to head
 * @n: information of node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp = **head;

	*head = malloc(sizeof(listint_t));
	if (!head)
		return (NULL);

	(*head)->n = n;
	(*head)->next = tmp;
	return (*head);
}
