#include "main.h"

/**
 * free_grid - entry point
 * @grid: pointer to a pointer int vaiable
 * @height: int variable
 * Return: on success
 */

void free_grid(int **grid, int height)
{
	for (int i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
