#include <stdlib.h>
#include "lists.h"


/**
 * add_nodeint_end - The function adds a new node at the end of the listint_t
 * list
 * @head: a pointer to a pointer to the head of the listint_t list
 * @n: a constent integer contain the nubmer to be added to the newly created
 * node at the end of the list
 *
 * Return: a pointer to the new created element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;

	if (!*head)
	{
		*head = malloc(sizeof(**head));
		if (!*head)
			return (NULL);
		temp = *head;
	}
	else
	{
		temp = *head;
		for (; temp->next;)
			temp = temp->next;
		temp->next = malloc(sizeof(**head));
		if (!temp->next)
			return (NULL);
		temp = temp->next;
	}
	temp->n = n;
	temp->next = NULL;
	return (temp);
}
