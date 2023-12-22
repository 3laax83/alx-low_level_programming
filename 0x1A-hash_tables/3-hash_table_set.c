#include "hash_tables.h"
#include "node_create.c"

/**
 * hash_table_set - function to set a key, value for a node in a table
 * @ht: pointer to hash table
 * @key: pointer to key to be set
 * @value: pointer to value to be set
 * Return: return 1 if succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp, *new;
	unsigned int i;

	if (!ht || !ht->array || !ht->size || !key || !key[0] || !value)
		return (0);
	i = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[i];
	for (; tmp; tmp = tmp->next)
	{
		if (!strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
	}
	new = node_create(key, value);
	if (!new)
		return (0);
	new->next = ht->array[i];
	ht->array[i] = new;
	return (1);
}
