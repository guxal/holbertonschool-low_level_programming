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
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (cnew_dog);
}
