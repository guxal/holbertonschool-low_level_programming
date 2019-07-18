#include <stdlib.h>
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
 * *string_nconcat - string concatenation
 * @s1: char 1
 * @s2: char 2
 * @n: number
 * Return: new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstring;
	unsigned int strlen_s1;
	unsigned int strlen_s2;
	unsigned int _malloc, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	strlen_s1 = _strlen(s1);
	strlen_s2 = _strlen(s2);

	if (n >= strlen_s2)
		_malloc = strlen_s1 + strlen_s2;
	else
		_malloc = strlen_s1 + n;

	newstring = malloc(sizeof(char) * (_malloc + 1));
	if (newstring == NULL)
		return (NULL);
	for (i = 0; i < _malloc; i++)
	{
		if (i < strlen_s1)
			newstring[i] = s1[i];
		else
			newstring[i] = s2[i - strlen_s1];
	}
	newstring[i] = '\0';
	return (newstring);
}
