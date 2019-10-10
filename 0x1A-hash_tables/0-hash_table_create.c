#include "hash_tables.h"
/**
 * hash_table_create - create hash table
 * @size: size table create
 *
 * Return: hash_table_t
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *T;

	if (size < 1)
		return (NULL);

	T = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (T == NULL)
		return (NULL);

	T->array = (hash_node_t **)malloc(size * sizeof(hash_node_t *));
	if (T->array == NULL)
		return (NULL);

	T->size = size;

	return (T);
}
