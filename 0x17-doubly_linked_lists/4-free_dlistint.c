#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t
 *
 * @head: head pointer
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	current = head;
	while (current)
	{
		head = head->next;
		free(current);
		current = head;
	}
}
