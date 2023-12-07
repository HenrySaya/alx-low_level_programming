#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * @h:head pointer
 * @idx: index  where new node should be added
 * @n: data to be entered at idx
 * Return: address of new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *actual;
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (!idx)
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
		return (new);
	}

	actual = *h;
	while (actual && count < idx - 1)
	{
		actual = actual->next;
		count++;
	}

	if (!actual || count != idx - 1)
		return (NULL);

	new->next = actual->next;
	actual->next = new;
	new->prev = actual;

	if (new->next)
		new->next->prev = new;

	return (new);

}
