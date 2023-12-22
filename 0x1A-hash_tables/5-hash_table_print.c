#include "hash_tables.h"

/**
 * hash_table_print - function to print all nodes' keys and value
 * @ht: pointer to hash table
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i, sign;
	hash_node_t *tmp;

	if (!ht)
		return;
	printf("{");
	for (i = 0, sign = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		for (; tmp; tmp = tmp->next)
		{
			printf("\'%s\': \'%s\'", tmp->key, tmp->value);

			if (tmp->next)
				printf(", ");
		}
		for (; !(ht->array[i + 1]); i++)
			;
		if (sign && i < ht->size)
			printf(", ");
		else
			sign = 1;
	}
	printf("}\n");
}
