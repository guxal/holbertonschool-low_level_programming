#include "lists.h"
#include <stdlib.h>
/**
 * *insert_nodeint_at_index - insert node int
 * @head: head node list
 * @idx: index
 * @n: integer in n new
 * Return: integer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new;
	listint_t *tmp;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	tmp = *head;
	while (tmp != NULL)
	{
		if ((count + 1) == idx)
		{
			new->n = n;
			new->next = tmp->next;
			tmp->next = new;
			return (tmp);
		}
		else if (idx == 0)
		{
			new->n = n;
			new->next = *head;
			*head = new;
			return (new);
		}
		tmp = tmp->next;
		count++;
	}
	return (NULL);
}
