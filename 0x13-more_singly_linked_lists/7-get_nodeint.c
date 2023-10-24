#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a listint_t
 * linked list.
 * @head: pointer to head
 * @index: index of node
 * Return: the nth node of a listint_t linked list, f the node does not exist,
 * return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int n;

	for (n = 0; head != NULL; n++, head = head->next)
	{
		if (n == index)
			return (head);
	}
	return (NULL);
}
