#include <string.h>
#include "lists.h"
/**
 * list_len - length list
 * @h: list
 * Return: integer length
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
		h = h->next, count++;

	return (count);
}
