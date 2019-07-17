#include <stdlib.h>

/**
 * delete_memory - delete memory
 * @table: table
 * @value: value
 * Return: none
 */
void delete_memory(int **table, int value)
{
	free(table);
	while (value)
		free(table[--value]);
}
/**
 * alloc_grid - alloc grid
 * @width: width
 * @height: height
 * Return: array multidimensional
 */
int **alloc_grid(int width, int height)
{
	int **table;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	table = malloc(width * sizeof(int *));
	if (table == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		table[i] = malloc(height * sizeof(int));
		if (table[i] == NULL)
		{
			delete_memory(table, i);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			table[i][j] = 0;
		}
	}
	return (table);
}
