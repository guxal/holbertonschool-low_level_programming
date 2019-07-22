#include <stdlib.h>
#include "dog.h"
unsigned int _strlen(char *s);
char *_strcpy(char *dest, char *src);
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

	if (name == NULL)
		new_dog->name = name;
	else
	{
		new_dog->name = malloc(_strlen(name) + 1);
		if (new_dog->name == NULL)
		{
			free(new_dog);
			return (NULL);
		}
		new_dog->name = _strcpy(new_dog->name, name);
	}

	if (owner == NULL)
		new_dog->owner = owner;
	else
	{
		new_dog->owner = malloc(_strlen(owner) + 1);
		if (new_dog->owner == NULL)
		{
			free(new_dog->name);
			free(new_dog);
			return (NULL);
		}
		new_dog->owner = _strcpy(new_dog->owner, owner);
	}
	new_dog->age = age;
	return (new_dog);
}

/**
 * _strlen - string length
 * @str: string
 * Return: length string
 */
unsigned int _strlen(char *str)
{
	unsigned int i = 0;

	while (str[i] != 0)
		i++;
	return (i);
}

/**
 * *_strcpy - copy string
 * @dest: destination
 * @src: source
 * Return: copy destination
 */
char *_strcpy(char *dest, char *src)
{
	int str = _strlen(src);
	int i;

	for (i = 0; i <= str; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
