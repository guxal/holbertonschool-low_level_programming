#include "holberton.h"

/**
 * print_alphabet - writes the alphabet
 *
 * Return: On success 1.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
