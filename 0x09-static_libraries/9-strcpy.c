#include "holberton.h"
#include <stdio.h>
/**
 * _strlen - strlen
 * @s: data strlen
 * Return: value
 */
/*
int _strlen(char *s)
{
	int n = 0;

	while (s[n])
		++n;

	return (n);
}
*/
/**
 * *_strcpy - copy string
 * @dest: destination
 * @src: source
 * Return: copy destination
 */
char *_strcpy(char *dest, char *src)
{
	int str = 10;//_strlen(src);
	int i;

	for (i = 0; i <= str; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
