#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * print_listint - print list
 * @h: listin_t
 * Return: integer number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
		printf("%d\n", h->n), count++, h = h->next;
	return (count);
}
