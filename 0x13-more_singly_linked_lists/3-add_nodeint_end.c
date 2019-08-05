#include <stdlib.h>
#include "lists.h"
/**
 * *add_nodeint_end - add node int end
 * @head: head
 * @n: new value node int
 * Return: listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp;

	tmp = *head;
	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;

	return (*head);
}
