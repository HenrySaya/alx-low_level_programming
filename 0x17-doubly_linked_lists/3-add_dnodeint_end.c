#include "lists.h"
/**
 * add_dnodeint_end - add node at end
 *
 * @head: head pointer
 * @n: data in list
 * Return: address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new;

	temp = malloc(sizeof(dlistint_t));
	if (!temp)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head)
	{
		new = *head;
		while (new->next)
			new = new->next;
		new->next = temp;
		temp->prev = new;
	}
	else
	{
		temp->prev = NULL;
		*head = temp;
	}
	return (temp);
}
