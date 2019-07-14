#include "holberton.h"
/**
 * _strlen - strlen data
 * @s: data
 * Return: n
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
 * _puts - puts stdout
 * @str: string print
 * Return: none
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		++i;
	}
	_putchar('\n');
}
