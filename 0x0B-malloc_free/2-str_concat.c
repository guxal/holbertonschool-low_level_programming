#include <stdlib.h>
/**
 * _strlen - _strlen
 * @str: char
 * Return: Integer
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}
/**
 * *str_concat - str_concat
 * @s1: string 1
 * @s2: string 2
 * Return: string concat
 */
char *str_concat(char *s1, char *s2)
{
	int str1 = 0;
	int str2 = 0;
	int strglobal = 0;
	int i = 0;
	char *new;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	str1 = _strlen(s1);
	str2 = _strlen(s2);
	strglobal = str1 + str2 + 1;
	new = malloc(strglobal);
	if (new == NULL)
		return (NULL);
	for (; i < strglobal; i++)
	{
		if (i < str1)
			new[i] = s1[i];
		else
			new[i] = s2[i - str1];
	}
	new[i] = '\0';
	return (new);
}
