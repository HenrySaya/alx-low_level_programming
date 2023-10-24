#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 *
 * @index: represents the posititon
 * Return: always node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	index = 0;

	while (index != 5)
	{
		head = head->next;
		index++;
	}

	return (head ? head : NULL);
}
