#include "lists.h"

/**
 * free_listint2 -  a function that frees a listint_t list.
 * @head: pointer to head
 */

void free_listint2(listint_t **head)
{
	listint_t *reader;

	if (head == NULL)
		return;

	while (*head)
	{
		reader = (*head)->next;
		free(*head);
		*head = reader;
	}
	*head = NULL;
}
