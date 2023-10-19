#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: head pointer of the linked list
 * Return: returns count
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *temp = h;

	if (temp == NULL)
		printf("[0] (nil)\n");

	while (temp != NULL)
	{
		printf("[%d] %s\n", temp->len, temp->str);
		count++;
		temp = temp->next;
	}

	return (count);
}
