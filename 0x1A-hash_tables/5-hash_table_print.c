#include "hash_tables.h"
/**
 * hash_table_print - print hash table.
 * @ht: hash table data
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i, flat = 0;
	hash_node_t *tmp = NULL;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (!ht->array[i])
			continue;

		for (tmp = ht->array[i]; tmp != NULL; tmp = tmp->next)
		{
			if (flat > 0)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			flat++;
		}
	}
	printf("}\n");
}
