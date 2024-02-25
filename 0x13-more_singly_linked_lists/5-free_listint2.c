#include <stdlib.h>
#include "lists.h"


/**
 * free_listint2 - The function frees all the elements of listint_t list
 * @head: a pointer to a pointer to the first element of listint_t list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;
	temp = *head;
	for (; temp != NULL;)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
}
