#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list_t list.
 * @head: pointer to list_t struct
 * @str: pointer for new element info
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_s *newHead, *temp;

	newHead = malloc(sizeof(list_s));

	if (str == NULL || newHead == NULL)
		return (NULL);

	for (; str[i] != '\0'; i++)
		;

	if (*head == NULL)
	{
		*head = newHead;
		newHead->len = i;
		newHead->str = strdup(str);
		newHead->next = NULL;
		return (newHead);
	}

	for (temp = *head; temp->next; temp = temp->next)
		;

	temp->next = newHead;

	newHead->len = i;
	newHead->str = strdup(str);
	newHead->next = NULL;

	return (newHead);

}
