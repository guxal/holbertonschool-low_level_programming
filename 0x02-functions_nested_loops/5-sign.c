#include "holberton.h"

/**
 * print_sign - print sign
 * @n : data
 *
 * Return: Always num (Success)
 */
int print_sign(int n)
{
	int num;

	if (n > 0)
	{
		num = 1;
		_putchar(43);
	}
	if (n < 0)
	{
		num = -1;
		_putchar(45);
	}
	if (n == 0)
	{
		num = 0;
		_putchar(48);
	}

	return (num);
}
