#include "lists.h"
/**
 * pop_listint - deletes the head node
 *
 * @head: head ointer of listint_t
 * Return: returns num
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int popped_num;

	if (!head || !(*head))
		return (0);

	popped_num = (*head)->n;
	*head = (*head)->next;
	free(temp);
	temp = NULL;

	return (popped_num);
}
