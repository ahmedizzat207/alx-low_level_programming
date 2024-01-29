#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * strtow - The function splits a string into words
 * @str: the string to separate into words
 *
 * Return: a pointer to an array of strings word, if failed return NULL
 */

char **strtow(char *str)
{
	unsigned long int i;
	int j;
	int *n;
	int e;
	int d;
	unsigned long int len;
	char **ptr;

	e = 0;
	if (str == NULL || *str == '\0')
		return (NULL);
	len = strlen((const char *)str);
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && str[i+1] == ' ')
			e++;
	}
	n = malloc(sizeof(int) * (e - 1));
	e = 0;
	for (i = 0; i < len; i++)
	{
		for (j = 0; str[i] != ' ' && i < len; j++)
		{
			i++;
		}
		n[e] = j;
		if (str[i] == ' ' && str[i+1] != ' ')
			e++;
	}	
	ptr = malloc(sizeof(char) * (e - 1));
	if (ptr == NULL)
		return (NULL);
	e = 0;
	for (i = 0; i < len; i++)
	{
		for (j = 0; str[i] != ' ' && str[i] != '\0'; j++)
		{
			d = 0;
			ptr[e] = malloc(sizeof(char) * (*n + 2));
			if (ptr[e] == NULL)
				return (NULL);
			ptr[e][d] = str[i];
			d++;
			ptr[e][d] = '\0';
			d++;
			i++;
		}
		e++;
	}
	return (ptr);
}
