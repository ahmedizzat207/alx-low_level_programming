#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - The function inserts a new node at a given
 * position
 * @h: a pointer to a pointer containing the address of the first node in the
 * dlistint_t list
 * @idx: an unsigned integer containing the index where to add the new node in
 * @n: an integer containing the value assigned to the new added node
 *
 * Return: a pointer to the newly added node, or NULL if it failed or the index
 * is not found
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prev, *next, *new;
	unsigned int count;

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->n = n;
	next = *h;
	if (*h)
		prev = (*h)->prev;
	else
		prev = *h;
	for (count = 0; next && count < idx; count++)
	{
		prev = next;
		next = prev->next;
	}
	if (count == idx)
	{
		new->next = next;
		new->prev = prev;
		if (next)
			next->prev = new;
		if (idx == 0)
			*h = new;
		else
			prev->next = new;
	}
	else
	{
		return (NULL);
	}
	return (new);
}
