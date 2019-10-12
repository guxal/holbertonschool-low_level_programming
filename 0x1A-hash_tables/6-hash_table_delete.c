#include "hash_tables.h"
/**
 * hash_table_delete - free all table
 * @ht: hash table data
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *tmp = NULL, *current = NULL;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			tmp = ht->array[i];
			while (tmp)
			{
				current = tmp;
				tmp = tmp->next;
				free(current->key);
				free(current->value);
				free(current);
			}
		}
	}

	free(ht->array);
	free(ht);
}
