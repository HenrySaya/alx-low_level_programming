#include "lists.h"
/**
 * get_dnodeint_at_index - get nth node function
 *
 * @head: head pointer
 * @index: reference point to list items
 * Return: return null if index is out of range
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *ptr = head;

	while (ptr && count < index)
	{
		ptr = ptr->next;
		count++;
	}
	if (count == index)
		return (ptr);

	return (NULL);
}
