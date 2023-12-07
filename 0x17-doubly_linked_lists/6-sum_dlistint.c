#include "lists.h"
/**
 * sum_dlistint - sum of all the data
 *
 * @head: head pointer
 * Return: returns sum if successful and 0 if empty list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr = head;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
