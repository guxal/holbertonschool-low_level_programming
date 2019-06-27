#include "holberton.h"
/**
 * _isdigit - is a digit
 * @c: value
 *
 * Return:0
 */
int _isdigit(int c)
{
	int v = 0;
	int i;

	for (i = 48; i <= 58; i++)
	{
		if (c == i)
			v = 1;
	}
	return (v);
}
