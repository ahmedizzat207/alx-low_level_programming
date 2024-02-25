#include <stddef.h>
#include "lists.h"


/**
 * listint_len - The function calculates the number of nodes in the listint
 * list
 * @h: a constent pointer to the head of the listint list
 *
 * Return: the number of element in listint list in a variable of type size_t
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	for (count = 0; h; count++)
		h = h->next;
	return (count);
}
