#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - The function searches for an integer
 * @array: a pointer to the array in which to search
 * @size: the size of the array
 * @cmp: a pointer to the comparing function
 *
 * Return: the integer index in the array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);
	if (cmp != NULL && array != NULL)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
		return (-1);
	}
	return (-1);
}
