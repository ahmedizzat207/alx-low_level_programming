#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - The function frees a dlistint_t list
 * @head: a pointer to the first node of the dlistint_t list
 *
 */
void free_dlistint(dlistint_t *head)
{
	if (head->next)
		free_dlistint(head->next);
	free(head);
}
