#include <stdlib.h>
/**
 * *array_range - array range
 * @min: min
 * @max: max
 * Return: integer
 */
int *array_range(int min, int max)
{
	int *str;
	int i = 0;
	int sum =  max - min;

	if (min > max)
		return (NULL);
	str = malloc(sum + 1);
	if (str == NULL)
		return (NULL);
	for (; min <= max; min++)
	{
		str[i] = min;
		i++;
	}
	return (str);
}
