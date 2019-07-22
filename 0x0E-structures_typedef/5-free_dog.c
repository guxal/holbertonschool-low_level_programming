#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free dogs
 * @d: data struct free
 * Return: none
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
}
