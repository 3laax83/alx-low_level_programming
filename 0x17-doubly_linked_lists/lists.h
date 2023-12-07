#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_t
{
	int n;
	struct dlistint_t *prev;
	struct dlistint_t *next;
} dlistint_t;
size_t print_dlistint(const dlistint_t *h);
#endif /*LISTS_H*/
