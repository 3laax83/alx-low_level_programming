#include "./lists.h"

/**
 * free_dlistint - free all list nodes
 * @head: pointer to head node
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	do {
		tmp = head->next;
		free(head);
	} while ((head = tmp));
}
