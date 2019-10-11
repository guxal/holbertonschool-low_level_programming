#include "hash_tables.h"
/**
 * key_index - key index
 * @key: string
 * @size: size array
 * Return: key %(mod) size
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
