#include "lists.h"

/**
 * sum_dlistint - The function returns the sum of all the data (n) of
 * dlistint_t linked list
 * @head: a pointer to the first element of the dlistint_t list
 *
 * Return: the sum of all the data (n) of the list, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	if (head)
		return (head->n + sum_dlistint(head->next));
	else
		return (0);
}
