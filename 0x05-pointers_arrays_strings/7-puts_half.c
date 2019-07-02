#include "holberton.h"
/**
 * _strlen - strlen data
 * @s: data
 * Return: none
 */
int _strlen(char *s)
{
	int n = 0;

	while (s[n])
		++n;

	return (n);
}
/**
 * puts_half - puts half
 * @str: string
 * Return: none
 */
void puts_half(char *str)
{
	int length_of_the_string = _strlen(str);
	int n;
	int i;

	if (length_of_the_string % 2 != 0)
	{
		n = (length_of_the_string - 1) / 2;
	}
	else
	{
		n = length_of_the_string / 2;
	}
	i = length_of_the_string - n;
	for (; i < length_of_the_string; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
