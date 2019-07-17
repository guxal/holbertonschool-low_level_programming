#include <stdlib.h>

/**
 * delete_memory - delete memory
 * @table: table
 * @value: value
 * Return: none
 */
void delete_memory(int **table, int value)
{
	--value;
	while (value--)
		free(table[value]);
	free(table);
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

	table = malloc(width);

	for (i = 0; i < width; i++)
	{
		table[i] = malloc(height);
		if (table[i] == NULL)
		{
			delete_memory(table, i);
			return (NULL);
		}
		for (j = 0; j < height; j++)
		{
			table[i][j] = 0;
		}
	}

	return (table);
}
