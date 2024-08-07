#include "main.h"
#include "stdlib.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: the width of the grid.
 * @height: the height of the grid.
 *
 * Return: pointer to the 2D array, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}

	return (grid);
}
