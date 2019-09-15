#include "lists.h"
/**
 * *get_dnodeint_at_index - get node int at index
 * @head: header node
 * @index: get index
 * Return: get node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int count = 0;

	tmp = head;

	while (tmp->next != NULL)
	{
		if (count == index)
			return (tmp);
		count++;
		tmp = tmp->next;
	}

	return (NULL);

}
