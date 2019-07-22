#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print object dog
 * @d: data struct
 * Return: dog
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
