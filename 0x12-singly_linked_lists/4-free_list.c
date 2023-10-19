#include "lists.h"

/**
 * free_list -  a function that frees a list_t list.
 * @head: pointer to list_t struct
 */

void free_list(list_t *head)
{
	list_s *tmp;

	for (tmp = head; tmp; tmp = tmp->next)
	{
		free(tmp->str);
		free(tmp);
	}
}
