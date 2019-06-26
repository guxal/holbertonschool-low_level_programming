#include "holberton.h"

void _print1(int c);
void _print2(int c);

/**
 * _print1 - print value 1
 * @c: integer
 *
 * Return: no return
 */
void _print1(int c)
{
	_putchar(' ');
	_putchar(' ');
	_putchar(c / 10 + '0');
	_putchar(c % 10 + '0');
}
/**
 * _print2 - print value 2
 * @c: integer
 *
 * Return: no return
 */
void _print2(int c)
{
	int z = (c / 10) / 10;
	int x = (c % 100) / 10;
	int y = (c % 10);

	_putchar(' ');
	_putchar(z + '0');
	_putchar(x + '0');
	_putchar(y + '0');
}
/**
 * print_times_table - print table times
 * @n: value
 *
 * Return: absoluted.
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n <= 15 && n >= 0)
	{
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			c = a * b;
			if (c > 9)
			{
				if (c > 99)
				{
					_print2(c);
				}
				else
				{
					_print1(c);
				}
			}
			else
			{
				if (b != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(c + '0');
			}
			if (b != n)
				_putchar(',');
		}
		_putchar('\n');
	}
	}
}
