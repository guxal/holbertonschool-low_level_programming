#include <stdio.h>
/**
 * array_iterator - itera array with function
 * @array: array
 * @size: size
 * @action: action
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && size > 0 && action != NULL)
	{
	for (i = 0; i < size; i++)
		action(array[i]);
	}
}
