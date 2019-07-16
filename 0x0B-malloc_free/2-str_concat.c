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
		++i;
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
	int str1 = _strlen(s1);
	int str2 = _strlen(s2);
	int strglobal = 0;
	int i = 0;
	char *new;

	if (str1 == 0)
		strglobal = str2;
	if (str2 == 0)
		strglobal = str1;
	if (str1 != 0 && str2 != 0)
		strglobal = str1 + str2;
	new = malloc(strglobal);
	if (!new)
		return (NULL);
	for (; i <= strglobal; i++)
	{
		if (str1 == 0)
		{
			new[i] = s2[i];
		}
		if (str2 == 0)
		{
			new[i] = s1[i];
		}
		if (str1 != 0 && str2 != 0)
		{
			if (i < str1)
				new[i] = s1[i];
			else
				new[i] = s2[i - str1];
		}
	}
	new[i] = '\0';
	return (new);
}
