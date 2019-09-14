#include "lists.h"
/**
 * dlistint_len - d listint
 * @h: header
 * Return: integer number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
