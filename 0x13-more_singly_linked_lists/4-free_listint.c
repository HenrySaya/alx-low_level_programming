#include "lists.h"
/**
 * free_listint - function that frees our list
 *
 * @head: head point to listint_t
 * Return: no return
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
