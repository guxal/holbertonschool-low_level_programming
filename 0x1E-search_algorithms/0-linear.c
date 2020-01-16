#include "search_algos.h"
/**
 * linear_search - search for a value in an array
 * @array: this array for search
 * @size: this size of the array
 * @value: value to search for
 * Return: The index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (; i < size; i++)
	{
		printf("Value checked array[%zu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

