#include "hash_tables.h"
#include "node_create_update.c"

/**
 * hash_table_set - function to set the key, value in a table
 * @ht: pointer to hash table
 * @key: the key to be set
 * @value: the value to be set
 * Return: 1 if succeed, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int i;
	char *str = NULL;
	hash_node_t *node;

	if (!ht || !key)
		return (0);
	i = key_index((unsigned char *)key, ht->size);
	if (value)
		str = strdup(value);

	node = ht->array[i];
	if (!node)
		node = node_create(NULL, key, str);
	if (node->key)
	{
		ht->array[i] = node_update(node, key, str);
		return (1);
	}
	node->key = strdup(key);
	node->value = str;
	node->next = NULL;
	ht->array[i] = node;
	return (1);
}
