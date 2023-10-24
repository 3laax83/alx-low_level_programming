#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at index
 * index of a listint_t linked list.
 * @head: pointer to head
 * @index: index of node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *reader, *next;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	reader = *head;
	if (index == 0)
	{
		*head = reader->next;
		free(reader);
		return (1);
	}

	if (index == 1)
	{
		reader = (*head)->next;
		(*head)->next = reader->next;
		free(reader);
		return (1);
	}

	for (; i < index - 1; i++, reader = reader->next, next = reader->next)
		if (reader->next == NULL)
			return (-1);

	reader->next = next->next;
	free(next);

	return (1);
}
