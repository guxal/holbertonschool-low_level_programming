#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - init dog
 * @d: struct
 * @name: data name
 * @age: data age
 * @owner: data owner
 * Return: none
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
