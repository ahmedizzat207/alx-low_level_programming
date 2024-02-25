#include <stdlib.h>
#include "lists.h"


/**
 * delete_nodeint_at_index - The function deletes the node at specific index of
 * a listint_t linked list
 * @head: a pointer to a pointer to the first element of the listint_t list
 * @index: an unsigned integer that contain the index where the element should
 * be deleted
 *
 * Return: (1) if the function deleted the element succesfully, and (-1) if it
 * failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2;
	unsigned int count;

	if (!head || !*head)
		return (-1);
	temp = temp2 = *head;
	for (count = 0; temp && count + 1 < index; count ++)
		temp = temp2 = temp->next;
	if (!index)
	{
		if ((*head)->next)
		{
			*head = (*head)->next;
			temp->next = NULL;
			free(temp);
		}
		else
		{
			free(*head);
			*head = NULL;
		}
	}
	else
	{
		temp2 = temp2->next;
		temp->next = temp2->next;
		temp2->next = NULL;
		free(temp2);
	}
	return (1);
}
