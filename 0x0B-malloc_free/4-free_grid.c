#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2 dimensional grid.
 * @grid: address of the grid.
 * @height: height of the matrix.
 */
void free_grid(int **grid, int height)
{
	int l;

	for (l = 0; l < height; l++)
		free(grid[l]);
	free(grid);
}
