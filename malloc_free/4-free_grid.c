#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees the grid
 *
 * @grid: grid
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int l;

	l = 0;
	while (l < height)
	{
		free(grid[l]);
		l++;
	}
	free(grid);
}
