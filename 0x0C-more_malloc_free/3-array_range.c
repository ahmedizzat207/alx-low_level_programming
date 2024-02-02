#include <stdlib.h>
#include "main.h"

/**
 * array_range - The function creates an array of integers
 * @min: The minimum number and first one in the array
 * @max: The last and maximum number in the array
 *
 * Return: a pointer to the created array, or NULL if the funciton fail
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(*ptr) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; (min + i) <= max; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
