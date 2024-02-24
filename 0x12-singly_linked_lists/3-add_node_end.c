#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 * add_node_end - The function adds a new node at the end of a list_t list
 * @head: a pointer to a pointer that contain the first element of list_t list
 * @str: a pointer to character (string) which should be printed in the added
 * element of the list_t list
 *
 * Return: a pointer to the added element of the list_t list, or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;

	if (!*head)
	{
		*head = malloc(sizeof(temp));
		if (!*head)
			return (NULL);
		(*head)->next = NULL;
		temp = *head;
	}
	else
	{
		temp = *head;
		for (; temp->next != NULL;)
			temp = temp->next;
		temp->next = malloc(sizeof(temp));
		if (!temp->next)
			return (NULL);
		temp = temp->next;
	}
	temp->str = strdup(str);
	temp->len = strlen(str);
	return (temp);
}
