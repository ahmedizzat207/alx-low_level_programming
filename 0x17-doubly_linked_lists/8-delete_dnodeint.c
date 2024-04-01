#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - the function deletes the node at index index
 * of a dlistint_t linked list
 * @head: a pointer to a pointer points to the first node of the list
 * @index: an unsigned integer containing the index where the node at that
 * position should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev, *next;
	unsigned int count;

	if (*head)
		prev = (*head)->prev;
	else
		return (-1);
	next = *head;
	for (count = 0; next && count < index; count++)
	{
		prev = next;
		next = next->next;
	}
	if (count == index)
	{
		next = next->next;
		if (index == 0)
		{
			free(*head);
			*head = next;
			if (next)
				next->prev = prev;
		}
		else
		{
			free(prev->next);
			prev->next = next;
			if (next)
				next->prev = prev;
		}
	}
	else
	{
		return (-1);
	}
	return (1);
}
