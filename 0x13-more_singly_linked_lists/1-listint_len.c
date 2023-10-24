#include "lists.h"
/**
 * listint_len - function to return number of elements
 *
 * @h: this is the head pointer.
 * Return: Returns count
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	const listint_t *ptr = NULL;

	ptr = h;

	if (h == NULL)
		printf("list is empty\n");
	while (ptr != NULL)
	{
		len++;
		ptr = ptr->next;
	}

	return (len);
}
