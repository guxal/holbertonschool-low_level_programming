#include "sort.h"

/**
 * swap - swapped integers
 * @a: value 1
 * @b: value 2
 **/
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/**
 * bubble_sort - sorts an array of integers in ascending order.
 * @array: unsorted array that need to sort
 * @size: the size of array
 **/
void bubble_sort(int *array, size_t size)
{
	bool swapped = false;
	size_t i;

	if (!array)
		return;

	for (i = 1; i <= size - 1; i++)
	{
		if (array[i - 1] > array[i])
		{
			swap(&array[i - 1], &array[i]);
			swapped = true;
		}
	}
	if (swapped)
	{
		print_array(array, size);
		bubble_sort(array, size);
	}
}
