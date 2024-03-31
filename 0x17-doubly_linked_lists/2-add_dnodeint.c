#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - The function adds a new node at the beginning of a dlistint_t
 * list
 * @head: a pointer to a pointer that contain the address of the frist node of
 * the list
 * @n: a constent integer that contain the the value of the data contained in
 * the new added list
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	return (new);
}
