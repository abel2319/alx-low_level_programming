#include <stdlib.h>

/**
 * free_grid -  frees a two dimensional grid
 * @grid: grid to delete
 * @height: the height of the grid
 *
 * Return: Nothings
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (ptr != NULL)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
		free(grid);
	}
}
