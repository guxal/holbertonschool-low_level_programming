#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - strlen
 * @str: string
 * Return: string
 */

int _strlen(const char *str)
{
	int count = 0;

	while (str[count])
		++count;
	return (count);
}
/**
 * *add_node_end - add node in end list
 * @head: head
 * @str: string
 * Return: List_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp;

	tmp = *head;
	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
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
