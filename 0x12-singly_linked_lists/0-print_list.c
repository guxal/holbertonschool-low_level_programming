#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * print_list - print list
 * @h: list
 * Return: integer
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("[%d] %s\n", (h->str != '\0') ?
				h->len : 0, (h->str != '\0') ? h->str : "(nil)");
		h = h->next;
		count++;
	}

	return (count);
}
