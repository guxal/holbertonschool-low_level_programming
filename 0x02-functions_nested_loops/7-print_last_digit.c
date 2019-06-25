#include "holberton.h"

/**
 * _abs - absoluted value
 * @i: value
 *
 * Return: absoluted.
 */
int _abs(int i)
{
	if (i < 0)
	{
		i = i * -1;
	}
	return (i);
}
/**
 * print_last_digit - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int c)
{
	int last = c % 10;

	last = _abs(last);
	_putchar(last + '0');
	return (last);
}
