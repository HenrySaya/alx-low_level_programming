#include "lists.h"
/**
 * add_dnodeint - function to add node
 *
 * @head: pointer to head of list
 * @n: data to be enlisted
 * Return: returns pointer to head of list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));

	if (!ptr)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = *head;
	ptr->prev = NULL;
	if (*head)
		(*head)->prev = ptr;
	*head = ptr;
	return (ptr);
}
