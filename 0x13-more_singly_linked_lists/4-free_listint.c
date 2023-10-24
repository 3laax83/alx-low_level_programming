#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: pointer to head
 */

void free_listint(listint_t *head)
{
	listint_t *reader;

	while (head)
	{
		reader = head->next;
		free(head);
		head = reader;
	}
}
