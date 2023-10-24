#include "lists.h"
/**
 * sum_listint - add all elements in the listint_t
 *
 * @head: head pointer of listint_t
 * Return: return sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	if (!head)
		return (0);
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
