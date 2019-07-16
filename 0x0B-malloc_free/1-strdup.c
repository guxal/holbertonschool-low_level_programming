#include <stdlib.h>
/**
 * *_strdup - duplicate string
 * @str: string
 * Return: char
 */
char *_strdup(char *str)
{
	char *new;
	int i = 0;

	new = malloc(sizeof(str));

	if (*str == 0)
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
