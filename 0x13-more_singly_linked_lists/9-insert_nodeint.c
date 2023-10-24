#include "lists.h"

/**
 * insert_nodeint_at_index -  a function that inserts a new node at a given position.
 * @head: pointer to head
 * @idx: index of the list where the new node should be added
 * @n: position of new node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *reader;
	unsigned int i = 0;

	tmp = malloc(sizeof(listint_t));

	if (head == NULL || tmp == NULL)
		return (NULL);

	tm->n = n;
	reader = *head;

	if (idx == 0)
	{
		tmp->next = *head;
		*head = tmp;
		return (*head);
	}

	for (; reader; i++, reader = reader->next)
	{
		if (i == idx - 1)
		{
			tmp->next = reader->next;
			reader->next = tmp;
		}
	}

	if (idex > i)
		return (NULL);

	return (tmp);
}
