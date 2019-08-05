#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - free list
 * @head: head node list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	tmp = head;
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);

}
