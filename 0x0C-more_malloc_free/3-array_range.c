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
	int i;
	int sum =  max - min;

	if (sum == 0)
	{
		str = malloc(sizeof(int));
		str[0] = min;
		return (str);
	}
	if (min > max)
		return (NULL);
	str = malloc(sizeof(int) * (sum + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
	{
		*(str + i) = min;
	}
	return (str);
}
