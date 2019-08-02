#include <stdlib.h>
#include "lists.h"
/**
 * free_list - free list
 * @head: head node list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
	free(head);

}
