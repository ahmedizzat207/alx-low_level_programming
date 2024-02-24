#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 * add_node - The function adds a new node at the beginning of list_t list
 * @head: a pointer to a pointer containing the address of the beginning of the
 * list
 * @str: a pointer to character (string) that needs to be duplicated inside the
 * list
 *
 * Return: a pointer to the new added element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(**head));
	if (!temp)
		return (temp);
	temp->next = *head;
	temp->str = strdup(str);
	temp->len = strlen(str);
	*head = temp;
	temp = NULL;
	return (*head);
}
