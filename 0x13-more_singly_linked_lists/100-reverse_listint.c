#include "lists.h"


/**
 * reverse_listint - The function reverses the listint_t linked list
 * @head: a pointer to a pointer to the first element of the listint_t list
 *
 * Return: a pointer to the new first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev;

	next = prev = NULL;
	for (; head && *head;)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
