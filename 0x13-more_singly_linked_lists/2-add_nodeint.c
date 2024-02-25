#include <stdlib.h>
#include "lists.h"


/**
 * add_nodeint - The function adds a new node at the beginning of a listint_t
 * list
 * @head: a pointer to a pointer to the head of the listint_t list
 * @n: a constent integer which should be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(**head));
	if (!temp)
		return (NULL);
	temp->next = *head;
	temp->n = n;
	*head = temp;
	return (*head);
}
