#include <stdlib.h>
#include <string.h>
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

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, size * nmemb); 
	return (ptr);
}
