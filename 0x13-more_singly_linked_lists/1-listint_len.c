#include "lists.h"
#include <string.h>
/**
 * listint_len - print list
 * @h: listin_t
 * Return: integer number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
		count++, h = h->next;
	return (count);
}
