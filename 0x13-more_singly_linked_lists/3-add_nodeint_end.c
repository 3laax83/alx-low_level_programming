#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end of a listint_t
 * list.
 * @head: pointer to head
 * @n: information of node
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *reader;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->next = NULL;
	tmp->n = n;

	if (*head)
	{
		reader = *head;
		for (; reader->next != NULL; reader = reader->next)
			;
		reader->next = tmp;
	}
	else
		*head = tmp;

	return (tmp);
}
