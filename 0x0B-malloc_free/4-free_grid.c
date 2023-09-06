#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free two dim arrays
 *
 * @grid: the 2d array
 * @height: the height of the array
 * Return: void
 */
void free_grid(int **grid, int height)
	{
	int i;

	if (grid == NULL)
		free(grid);

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
