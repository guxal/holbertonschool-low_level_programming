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

void _puts(char *str)
{
	int i;
	for (i = 0; i <= _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
