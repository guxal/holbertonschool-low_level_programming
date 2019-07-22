#include <stdlib.h>
#include "dog.h"
/**
 * *new_dog - new dog
 * @name: name dog
 * @age: age dog
 * @owner: owner dog
 * Return: new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *cnew_dog;

	cnew_dog = malloc(sizeof(struct dog));
	if (cnew_dog == NULL)
		return (NULL);
	cnew_dog->name = name;
	cnew_dog->age = age;
	cnew_dog->owner = owner;
	return (cnew_dog);
}
