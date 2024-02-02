#include <stdlib.h>
#include "main.h"
#include <string.h>

void *cpy_backup(void *ptr, unsigned int new_size);

/**
 * _realloc - The funciton reallocates a memory block using malloc and free
 * @ptr: a void pointer to the memory previously allocated
 * @old_size: the size, in bytes of the allocated space for ptr
 * @new_size: the new size, int bytes of the new memory block
 *
 * Return: a void pointer to the new allocated memory block, or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	ptr = cpy_backup(ptr, new_size);
	return (ptr);
}

/**
 * cpy_backup - The function copies all the possible content of old pointer ptr
 * to new pointer backup
 * @ptr: a void pointer to the memory previously allocated
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: a void pointer to the allocated new memory block, or NULL if the
 * function fails
 */

void *cpy_backup(void *ptr, unsigned int new_size)
{
	void *backup;

	backup = malloc(new_size);
	if (backup == NULL)
		return (NULL);
	strncpy(backup, ptr, new_size);
	free(ptr);
	return (backup);
}
