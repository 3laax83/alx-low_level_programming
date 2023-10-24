#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list.
 * @head: pointer to head
 * Return: The address of the node where the loop starts, or NULL if there is
 * no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p, *last;

	if (head == NULL)
		return (NULL);

	for (last = head->next; last; last = last->next)
	{
		if (last == last->next)
			return (last);

		for (p = head; p != last; p = p->next)
			if (p == last->next)
				return (last->next);
	}

	return (NULL);
}

/**
 * print_listint_safe -  a function that prints a listint_t linked list.
 * @head: pointer to head
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t length = 0;
	int loop = 1;
	listint_t *node;

	node = find_listint_loop((listint_t *) head);

	for (; head && (head != node || loop); length++, head = head->next)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		if (head == node)
			loop = 0;
	}

	if (node)
		printf("-> [%p] %d\n", (void *) head, head->n);

	return (length);
}
