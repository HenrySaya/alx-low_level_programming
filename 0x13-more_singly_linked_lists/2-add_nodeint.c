#include "lists.h"
/**
 * add_nodeint - function to add node at beginning of lits_t
 *
 * @head: pointer to head of node of listint_t
 * @n: data value of listint_t lis
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	ptr->n = n;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;

	if (*head == NULL)
		return (NULL);
	else
		return (ptr);
}
