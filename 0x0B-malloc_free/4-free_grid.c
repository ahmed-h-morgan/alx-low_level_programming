#include <stdlib.h>

/**
 * free_grid -  frees a 2 dimensional grid
 * @grid: the grid
 * @height: second dim
 * Return: 0 successful
*/

void free_grid(int **grid, int height)
{
	for (int i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
