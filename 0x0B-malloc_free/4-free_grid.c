#include <stdlib.h>
#include "holberton.h"
/**
 * free_grid - free grid memory
 * @grid: columns
 * @height: row
 * Return: none
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i  < height; i++)
		free(grid[i]);
	free(grid);
}
