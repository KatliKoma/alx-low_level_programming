#include <stdlib.h>
#include "main.h"

/**
 * free_grid - 2 dimensional grid previously created by your function.
 * @grid: the address of the two-dimensional grid
 * @height: the height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

