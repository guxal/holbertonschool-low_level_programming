#include "holberton.h"
/**
 * more_numbers - print numbers
 *
 * Return: none
 */
void more_numbers(void)
{
	int i;
	int a;
	int b;

	int cont = 10;

	while (cont--)
	{
	for (i = 0; i <= 14; i++)
	{
		a = i;
		if (i > 9)
		{
			a = i / 10;
			b = i % 10;
		}
		_putchar(a + '0');
		if (i > 9)
			_putchar(b + '0');
	}
	_putchar('\n');
	}
}
