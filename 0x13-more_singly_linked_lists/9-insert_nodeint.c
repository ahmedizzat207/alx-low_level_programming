#include <stdlib.h>
#include "lists.h"


/**
 * insert_nodeint_at_index - The function inserts a new node at a given
 * position
 * @head: a pointer to a pointer to the first element of the listint_t list
 * @idx: an unsigned integer contain the position to inserts new node in the
 * listint_t list
 * @n: an integer contain the number that the new inserted node should store
 *
 * Return: a pointer to the newly inserted node in listint_t list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *temp2;
	unsigned int count;

	temp = *head;
	temp2 = *head;
	for (count = 0; temp && count + 1 < idx; count++)
	{
		temp = temp->next;
		temp2 = temp2->next;
	}
	if (idx == 0)
	{
		temp = malloc(sizeof(**head));
		if (!temp)
			return (NULL);
		temp->n = n;
		if (head != NULL && *head != NULL)
		{
			temp->next = *head;
			*head = temp;
		}
		else
		{
			temp->next = NULL;
			*head = temp;
		}
	}
	else if (temp)
	{
		temp2 = temp2->next;
		temp->next = malloc(sizeof(**head));
		if (!temp->next)
			return (NULL);
		temp = temp->next;
		temp->n = n;
		temp->next = temp2;
	}
	return (temp);
}
