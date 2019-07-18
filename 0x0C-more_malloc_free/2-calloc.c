#include <stdlib.h>
/**
 * *_calloc - call
 * @nmemb: n
 * @size: size
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *memory;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		memory[i] = 0;
	return (memory);
}
