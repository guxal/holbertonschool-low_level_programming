#include <stdio.h>
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
