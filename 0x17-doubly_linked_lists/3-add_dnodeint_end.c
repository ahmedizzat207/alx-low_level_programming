#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - The function adds a new node at the end of a dlistint_t
 * list
 * @head: a pointer to a pointer containing the address of the first node of
 * the list
 * @n: a constent integer containing the value storted in the new added node
 *
 * Return: a pointer to the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	temp = *head;
	for (; temp && temp->next;)
		temp = temp->next;
	new->prev = temp;
	if (!temp)
		*head = new;
	else
		temp->next = new;
	return (new);
}
