#include "hash_tables.h"

/**
 * hash_table_delete - function to free all nodes in hash table
 * @ht: pointer to hash table
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned int i;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		if (tmp)
			node_delete(tmp);
	}
	free(ht->array);
	free(ht);
}

/**
 * node_delete - function to free a node values
 * @node: pointer to node
*/

void node_delete(hash_node_t *node)
{
	hash_node_t *tmp;

	for (; node; node = node->next)
	{
		tmp = node;
		free(node->key);
		if (node->value)
			free(node->value);
		free(tmp);
	}
}
