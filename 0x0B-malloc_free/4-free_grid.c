#include <stdlib.h>
#include "main.h"

/**
 * free_grid - The function frees a 2 dimensional grid previously created by
 * alloc_grid function
 * @grid: a pointer to a set of pointers
 * @height: the height of the array
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
