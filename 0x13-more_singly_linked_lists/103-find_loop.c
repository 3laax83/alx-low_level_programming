#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list.
 * @head: pointer to head
 * Returns: The address of the node where the loop starts, or NULL if there is no
 * loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p, *last;

	if (head == NULL)
		return (NULL);

	for (last = head->next; end; end = end->next)
	{
		if (end == end->next)
			return (end);

		for (p = head; p != last; p = p->next)
			if (p == last->next)
				return (last->next);
	}

	return (NULL);
}
