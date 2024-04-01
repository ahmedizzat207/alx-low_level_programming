#include "lists.h"

/**
 * get_dnodeint_at_index - The function returns the nth node of a dlistint_t
 * linked list
 * @head: a pointer to the first node of the list
 * @index: an unsigned integer containing the index of the wanted node order
 *
 * Return: the nth node of dlistint_t linked list, or NULL if node does not
 * exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; head && count < index; count++)
		head = head->next;
	return (head);
}
