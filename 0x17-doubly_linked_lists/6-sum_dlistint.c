#include "./lists.h"

/**
 * sum_dlistint - function to return sum of nodes values
 * @head: pointer to head
 * Return: if success, the sum. otherwise, 0.
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp;

	if (!head)
		return (0);
	tmp = head;
	do {
		sum += tmp->n;
	} while (tmp->next && (tmp = tmp->next));
	return (sum);
}
