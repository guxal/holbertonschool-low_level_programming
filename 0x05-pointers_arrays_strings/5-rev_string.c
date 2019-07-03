#include "holberton.h"
#include <stdio.h>
/**
 * _strlen - strlen
 * @s: data strlen
 * Return: value
 */
int _strlen(char *s)
{
	int n = 0;

	while (s[n])
		++n;

	return (n);
}
/**
 * rev_string - reverse string
 * @s: value reverse string
 * Return: pointer
 */
void rev_string(char *s)
{
	int str = _strlen(s);
	int i;
	int j = 0;
	char s1[10];

	for (i = str - 1; i >= 0; i--)
	{
		s1[j] = s[i];
		j++;
	}
	i = 0;
	for (; i <= str; i++)
	{
		s[i] = s1[i];
	}
}
