#include <stddef.h>
#include "lists.h"

/**
 * list_len - The function calculates the number of elements in a linked list_t
 * @h: a pointer to a singly linked list list_t to measure it's length
 *
 * Return: a number of type size_t the contain the list number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
		h = h->next;
	return (count);
}
