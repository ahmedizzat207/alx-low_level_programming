#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - The function create a 2 dimensional array of integers
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: a pointer to the array or NULL in failer
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			free(ptr);
			return (NULL);
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
