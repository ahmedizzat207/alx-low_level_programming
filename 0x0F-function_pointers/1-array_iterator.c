#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - The function executes a passed function on each element
 * of an array
 * @array: a pointer to the array
 * @size: the size of the array
 * @action: a pointer to the function that should be executed in all array
 * elements
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action != NULL && array != NULL)
	{
		int i;

		for (i = 0; i < (int)size; i++)
			action(array[i]);
	}
}
