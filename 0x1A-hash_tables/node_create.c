#include "hash_tables.h"

/**
 * node_create - function to create a new head node
 * @key: pointer to key to be set
 * @value: pointer to value to be set
 * Return: new node if succeeded, NULL otherwise
*/

hash_node_t *node_create(const char *key, const char *value)
{
	hash_node_t *new = malloc(sizeof(hash_node_t));

	if (!new || !key || !value)
		return (NULL);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	return (new);
}
