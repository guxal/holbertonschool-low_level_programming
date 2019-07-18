#include <stdlib.h>
/**
 * *malloc_checked - malloc checked
 * @b: integer
 * Return: none
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *r = malloc(b);

	if (r == NULL || r == 0)
		exit(98);
	return (r);

}
