#include "main.h"

/**
 * malloc_checked - The function alocates memory using malloc
 * @b: The number of byte to be allocated
 *
 * Return: A void pointer to the allocated space
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		return (98);
	else
		return (b);
}
