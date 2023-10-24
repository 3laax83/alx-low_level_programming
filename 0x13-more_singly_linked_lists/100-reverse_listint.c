#include "lists.h"

/**
 * reverse - reverses a list
 * @i: node to reverse
 * @j: node after i
 * Return: N/A
 */

listint_t *reverse(listint_t *i, listint_t *j)
{
	listint_t *p, *previous = NULL;

	p = i;
	while (p->next != j)
	{
		previous = p;
		p = p->next;
	}

	if (previous)
		previous->next = i;

	j = i->next;
	i->next = p->next;
	if (i != p && j != i)
		j = reverse(j, i);
	p->next = j;
	return (p);
}

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: pointer to head
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	if (*head == NULL)
		return (NULL);

	*head = reverse(*head, NULL);
	return (*head);
}
