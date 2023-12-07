#include "lists.h"
/**
 * dlistint_len - function returns number of elements i list
 *
 * @h: head point of linked list
 * Return: returns count
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
