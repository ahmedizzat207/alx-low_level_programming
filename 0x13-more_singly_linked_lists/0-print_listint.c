#include <stdio.h>
#include "lists.h"


/**
 * print_listint - The function prints all the elements of a listint_t list
 * @h: a constent pointer to a listint_t list contain the integers to print
 *
 * Return: a number of type size_t contain the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count;

	for (count = 0; h; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
