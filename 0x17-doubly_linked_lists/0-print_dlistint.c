#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - The function prints all the elements of a dlistint_t list
 * @h: a constent pointer to the head of the doubly linked list
 *
 * Return: a number of type size_t represent the size of the dlistint list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t size;

	for (size = 0; h; size++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (size);
}
