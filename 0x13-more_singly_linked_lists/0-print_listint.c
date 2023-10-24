#include "lists.h"
/**
 * print_listint - function to display all elements
 *
 * @h: head point of our node
 * Return: returns number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = NULL;

	ptr = h;

	if (h == NULL)
		printf("This is an empty list\n");

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
