#include <stdlib.h>
#include "main.h"

/**
 * _calloc - The function allocates memory for an array, using malloc
 * @nmemb: The number of elements in the array
 * @size: The bytes size of each element
 *
 * Return: a void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	int i;

	if (nmemb == NULL || size == NULL)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
