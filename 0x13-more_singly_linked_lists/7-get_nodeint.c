#include "lists.h"


/**
 * get_nodeint_at_index - The function returns the nth node of a listint_t list
 * @head: a pointer to the first element of the listint_t list
 * @index: an unsigned integer contain the position of the node to return
 *
 * Return: a pointer to the nth element of the listint_t list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; head && count < index; count++)
		head = head->next;
	return (head);
}
