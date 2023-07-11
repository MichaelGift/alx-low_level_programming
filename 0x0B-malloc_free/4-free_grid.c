#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free the 2D grids previously created
 * by 3-alloc_grid.c
 * @grid: pointer to grid
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
