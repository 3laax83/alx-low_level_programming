#include "hash_tables.h"

/**
 * node_create - function to create a new hash node
 * @end: the last node in a hash table
 * Return: new node if succeed, null otherwise
*/
hash_node_t *node_create(hash_node_t *end)
{
	hash_node_t *new = malloc(sizeof(hash_node_t));

	if (!new)
		return (NULL);
	new->key = NULL;
	new->value = NULL;
	if (end)
		end->next = new;
	new->next = NULL;
	return (new);
}

/**
 * node_update - function to update an already existing node
 * @target: node targetted for an update
 * @key: the new key
 * @value: the new value
 * Return: the target node after updating
*/
hash_node_t *node_update(hash_node_t *target, const char *key, char *value)
{
	hash_node_t *tmp = target;

	for (; tmp; tmp = tmp->next)
	{
		if (!strcmp(tmp->key, key))
		{
			free(tmp->value);
			tmp->value = value;
			return (target);
		}
	}

	tmp = target;
	target = node_create(target);
	if (!target)
	{
		target = tmp;
		return (target);
	}
	strcpy(target->key, key);
	target->value = value;
	return (target);
}
