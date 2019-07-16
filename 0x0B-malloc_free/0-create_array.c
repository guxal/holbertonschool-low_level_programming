#include <stdlib.h>
/**
 * *create_array - create array
 * @size: size
 * @c: char
 * Return: array pointer
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = malloc(size);
	if (size == 0)
		return (0);
	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
