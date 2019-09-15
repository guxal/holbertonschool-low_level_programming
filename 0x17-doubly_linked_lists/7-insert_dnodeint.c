#include "lists.h"
/**
 * *insert_dnodeint_at_index - insert node in index
 * @h: header
 * @idx: index
 * @n: new data
 * Return: Return new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new;
	dlistint_t *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		return (new);
	}
	tmp = *h;

	while (tmp)
	{
		if ((count + 1) == idx)
		{
			new->next = tmp->next;
			tmp->next = new;
			new->prev = tmp;
			return (new);
		}
		tmp = tmp->next;
		count++;
	}
	free(new);
	return (NULL);
}
