#include "lists.h"

/**
 * dlistint_len - The function counts and return the number of elements (nodes)
 * in a doubly linked list
 * @h: a constent pointer to the head of the list to count its elements
 *
 * Return: a number of type size_t represeting the number of node in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size;

	for (size = 0; h; size++)
	{
		h = h->next;
	}
	return (size);
}
