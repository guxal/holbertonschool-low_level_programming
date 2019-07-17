#include <stdlib.h>
/**
 * free_grid - free
 * @grid: grid
 * @height: height
 * Return: none
 */
void free_grid(int **grid, int height)
{
	int i = 0;
	while (i < height)
		free(grid[i++]);
	free(grid);
}
