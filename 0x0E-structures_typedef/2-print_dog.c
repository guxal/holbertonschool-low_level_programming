#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print object dog
 * @d: data struct
 * Return: dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		;
	else
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		if (d->age != 0)
			printf("Age: %f\n", d->age);
		else
			printf("Age: (nil)");
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
