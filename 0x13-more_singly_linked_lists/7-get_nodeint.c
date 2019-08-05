#include <stdlib.h>
#include "lists.h"
/**
 * *get_nodeint_at_index - get node integer of the list at index
 * @head: head list
 * @index: index return
 * Return: return listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count =  0;

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		count++;
		head = head->next;
	}

	return (NULL);
}
