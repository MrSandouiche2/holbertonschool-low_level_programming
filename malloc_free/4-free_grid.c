#include "main.h"
#include <stdlib.h>
/**
 * free_grid - va free le tableau de alloc_grid
 * @grid: pointer
 * @height: the height of the grid.
 *
 * Return: pointer to the 2D array, or NULL on failure.
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
