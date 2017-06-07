#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - frees a 2 dimensional grid already created by allo_grid function
 * @grid: pointer to a pointer to an int of a grid
 * @height: number of rows in the grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
