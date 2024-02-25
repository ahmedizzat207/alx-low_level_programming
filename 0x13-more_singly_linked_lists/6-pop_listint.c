#include <stdlib.h>
#include "lists.h"


/**
 * pop_listint - The function deletes the head node of listint_t linked list
 * @head: a pointer to a pointer to the first element of the linked list
 * listint_t
 *
 * Return: an integer contain the data stored by the first element
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	temp = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = temp;
	return (data);
}
