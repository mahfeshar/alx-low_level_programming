#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional array.
 *
 * @grid: The 2-dimensional array.
 * @height: The height.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
