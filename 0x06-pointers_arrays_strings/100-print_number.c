#include "holberton.h"
/**
 * print_number - print number integer
 * @n: number integer
 * Return: none
 */
void print_number(int n)
{
	int i;

	if (n < 0)
	{
		_putchar('-');
		i = n * -1;
	}
	else
	{
		i = n;
	}
	if (n / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
