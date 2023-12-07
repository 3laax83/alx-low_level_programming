#include "./lists.h"

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
