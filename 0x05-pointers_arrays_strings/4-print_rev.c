#include "holberton.h"
/**
 *
 *
 *
 */
int _strlen(char *s)
{
	int n = 0;

	while (s[n]) ++n;
	return (n);
}

void print_rev(char *s)
{
	int i;
	for (i = _strlen(s); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
