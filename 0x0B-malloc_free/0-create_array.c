#include <stdlib.h>
#include "main.h"

/**
 * create_array - The function creat an array of characters, initializes it
 * with a specific character
 * @size: the size of the array
 * @c: the character to initialize the array with
 *
 * Return: a pointer to the array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
