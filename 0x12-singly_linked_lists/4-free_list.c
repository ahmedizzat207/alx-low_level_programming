#include <stdlib.h>
#include "lists.h"


/**
 * free_list - The function frees all the alocated space by list_t list
 * @head: a pointer to a list_t list that needs to be freed
 */

void free_list(list_t *head)
{
	list_t *temp;

	for (; head;)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	temp = NULL;
}
