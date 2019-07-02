#include "holberton.h"
/**
 * _strlen - strlen data
 * @s: data
 * Return: n
 */
int _strlen(char *s)
{
	int n = 0;

	while (s[n])
		++n;
	return (n);
}
/**
 * _puts - puts stdout
 * @str: string print
 * Return: none
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
