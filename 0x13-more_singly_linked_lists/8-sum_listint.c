#include "lists.h"


/**
 * sum_listint - The function returns the sum of all the data (n) of a
 * listint_t linked list
 * @head: a pointer to the first element of the listint_t list
 *
 * Return: an integer of the sum result of the list elements, or 0 if the list
 * is empty
 */

int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head;)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
