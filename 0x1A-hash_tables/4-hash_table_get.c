#include "hash_tables.h"

/**
 * hash_table_get - function to get a node's value using its key
 * @ht: pointer to hash table
 * @key: pointer to key
 * Return: the value if succeed, NULL otherwise
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int i;
	hash_node_t *tmp;

	if (!ht || !key)
		return (NULL);

	i = key_index((unsigned char *)key, ht->size);

	tmp = ht->array[i];

	for (; tmp; tmp = tmp->next)
		if (strcmp(key, tmp->key) == 0)
			return (tmp->value);

	return (NULL);
}
