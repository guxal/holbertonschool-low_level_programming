#include "hash_tables.h"
/**
 * hash_table_set - setter data in hash table
 * @ht: hash table
 * @key: key save
 * @value: value the key
 * Return: Success 1 or Error 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *new_node = NULL;

	if (!ht || !key || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] != NULL && strcmp(key, ht->array[index]->key) == 0)
	{
		free(ht->array[index]->value);
		ht->array[index]->value = strdup(value);
		return (1);
	}

	new_node = malloc(sizeof(hash_node_t));

	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
