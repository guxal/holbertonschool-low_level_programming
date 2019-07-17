#include <stdlib.h>
/**
 * free_grid - free
 * @grid: grid
 * @height: height
 * Return: none
 */
void free_grid(int **grid, int height)
{
	while (height)
		free(grid[--height]);
	free(grid);
}
