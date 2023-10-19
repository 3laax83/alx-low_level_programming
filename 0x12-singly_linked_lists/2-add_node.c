#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a list_t
 * list.
 * @head: pointer to the new head element
 * @str: information of the new head
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t newHead;

	newHead = malloc(sizeof(list_t *));

	if (str == NULL)
	{
		newHead->str = NULL;
		newHead->len = 0;
		newHead->next = *head;
	}

	if (newHead = NULL)
		return (NULL);

	newHead->next = *head;
	*head = newHead;

	newHead->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
		;

	newHead->len = i;

	return (newHead);
}
