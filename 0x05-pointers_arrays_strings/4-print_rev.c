#include "holberton.h"
/**
 * _strlen - strlen count
 * @s: data
 * Return: data
 */
int _strlen(char *s)
{
	int n = 0;

	while (s[n])
		++n;

	return (n);
}
/**
 * print_rev - print reverse
 * @s: data
 * Return: data
 */
void print_rev(char *s)
{
	int i;

	for (i = _strlen(s); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
