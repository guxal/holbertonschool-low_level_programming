#include "hash_tables.h"
/**
 * hash_table_get - get data hash table
 * @ht: hash table
 * @key: key match
 * Return: char* [key] : value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index = 0;
	hash_node_t *tmp = NULL;

	if (!ht || !key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index])
		tmp = ht->array[index];

	while (tmp)
	{
		if (strcmp(key, tmp->key) == 0)
			return (tmp->value);

		tmp = tmp->next;
	}
	return (NULL);
}
