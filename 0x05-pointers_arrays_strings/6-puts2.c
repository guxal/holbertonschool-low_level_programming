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
 * puts2 - puts
 * @str: string
 * Return: none
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar(10);
}
