#include <stdlib.h>
#include "lists.h"


/**
 * free_listint - The function frees all the elements of listint_t list
 * @head: a pointer to the first element of listint_t list
 *
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	for (; temp;)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
