#include "./lists.h"

/**
 * dlistint_len - function to count number of nodes
 * @h: pointer to head node
 * Return: number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (!h)
		return (count);

	do {
		count++;
	} while (h && (h = h->next));
	return (count);
}
