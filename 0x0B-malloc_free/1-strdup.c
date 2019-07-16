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

	new = malloc(_strlen(str) + 1);

	if (str == 0)
		return (0);
	if (!new)
		return (0);
	while (str[i])
	{
		new[i] = str[i];
		i++;
	}

	return (new);
}
