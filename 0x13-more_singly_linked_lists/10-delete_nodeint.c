#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - delete node
 * @head: list head
 * @index: index
 * Return: 1 success -1 failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *_clear;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	tmp = *head;
	while (tmp)
	{
		if ((count + 1) == index)
		{
			_clear = tmp->next;
			tmp->next = (tmp->next)->next;
			free(_clear);
			return (1);
		}
		else if (index == 0)
		{
			_clear = tmp;
			*head = tmp->next;
			free(_clear);
			return (1);
		}
		count++;
		tmp = tmp->next;
	}

	return (-1);
}
