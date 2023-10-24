#include "lists.h"
/**
 * add_nodeint_end - add new node at end of list
 *
 * Return: returns address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;
	ptr = malloc(sizeof(listint_t));
	temp = *head;

	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = ptr;

	return (ptr);
}
