#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - The function return a pointer ot a newly allocated space in the
 * memory, which contain a copy of the string given as a parameter
 * @str: a pointer to a string that should be copied by the function
 *
 * Return: a pointer to the string copy or NULL if it fails
 */

char *_strdup(char *str)
{
	int i;
	char *ptr;

	if (str == NULL)
		return (NULL);
	ptr = malloc(sizeof(char) * strlen((const char *)str));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; (long unsigned int)i <= strlen((const char *)str); i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
