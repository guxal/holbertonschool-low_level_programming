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
 * *add_node - add node in list
 * @head: head
 * @str: string
 * Return: List_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
