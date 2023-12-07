#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index.
 *
 * @head: head pointer
 * @index: index of items in list
 * Return: 1 if succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int count = 0;

	if (*head == NULL || index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		(*head)->prev = NULL;
		return (1);
	}

	current = *head;
	while (current && count < index)
	{
		current = current->next;
		count++;
	}

	if (!current || count != index)
		return (-1);

	temp = current;
	current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;

	free(temp);
	return (1);
}
