#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: pointer to head
 * Return: the sum of all the data (n) of a listint_t linked list, if the list
 * is empty, return 0
 */

int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	for (; head; head = head->next)
		sum += head->n;

	return (sum);
}
