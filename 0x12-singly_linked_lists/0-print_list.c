#include <stdio.h>
#include "lists.h"


/**
 * print_list - The function prints all the elements of a singly linked list
 * list_t
 * @h: a pointer to the singly linked list list_t
 *
 * Return: a number of type size_t representing the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (count);
}
