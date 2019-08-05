#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - delete first node in list
 * @head: head node list
 * Return: integer value of the list struct
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	tmp = *head;

	if (tmp == NULL)
	{
		return (0);
	}
	else
	{
		*head = (*head)->next;
		n = tmp->n;
		free(tmp);
	}
	return (n);
}
