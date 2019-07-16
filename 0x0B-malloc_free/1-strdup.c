#include <stdlib.h>
/**
 * _strlen - strlen
 * @str: string
 * Return: integer length
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		++i;
	return (i);
}
/**
 * *_strdup - duplicate string
 * @str: string
 * Return: char
 */
char *_strdup(char *str)
{
	char *new;
	int i = 0;

	new = (char*) malloc(_strlen(str) + 1);

	if (str == NULL)
		return (NULL);
	if (new == NULL)
		return (NULL);
	while (str[i])
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';

	return (new);
}
