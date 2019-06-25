#include "holberton.h"

/**
 * _isalpha - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int c)
{
	int last = c%10;
	last = _abs(last);
	_putchar(last+'0');
	return (last);
}
