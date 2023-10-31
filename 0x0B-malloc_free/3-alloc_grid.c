#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2-dimensional array of integers
 * @gridWidth: the width of the grid
 * @gridHeight: the height of the grid
 * Return: NULL on failure, or if gridWidth or gridHeight is 0 or negative.
 */
int **alloc_grid(int gridWidth, int gridHeight)
{
	int **grid = NULL;
	int row, col;

	if (gridWidth < 1 || gridHeight < 1)
	{
		return (NULL);
	}

	grid = (int **)malloc(gridHeight * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (row = 0; row < gridHeight; row++)
	{
		grid[row] = (int *)malloc(gridWidth * sizeof(int));

		if (grid[row] == NULL)
		{
			for (row--; row >= 0; row--)
			{
				free(grid[row]);
			}

			free(grid);
			return (NULL);
		}
	}

	for (row = 0; row < gridHeight; row++)
	{
		for (col = 0; col < gridWidth; col++)
		{
			grid[row][col] = 0;
		}
	}

	return (grid);
}

