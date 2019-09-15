#include "lists.h"
/**
 * sum_dlistint - d listint
 * @head: header
 * Return: sum number inside all dlistint
 */
int sum_dlistint(dlistint_t *head)
{
	size_t count = 0;
	int sum = 0;

	while (head)
	{
		sum += head->n;
		count++;
		head = head->next;
	}

	return (sum);
}
