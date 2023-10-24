#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t linked
 * list, and returns the head node’s data (n).
 * @head: pointer to head
 * Return:  the head node’s data (n), if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	int value = 0;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	value = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (value);
}
