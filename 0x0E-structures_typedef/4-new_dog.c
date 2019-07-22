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
	struct dog newdog;
	struct dog *cnew_dog;

	cnew_dog = malloc(sizeof(struct dog));
	if (cnew_dog == NULL)
		return (NULL);
	newdog.name = name;
	newdog.age = age;
	newdog.owner = owner;
	cnew_dog = &newdog;
	return (cnew_dog);
}
