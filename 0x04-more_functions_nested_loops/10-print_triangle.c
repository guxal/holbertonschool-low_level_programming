#include "holberton.h"

/**
 * print_triangle - print triangle
 * @size: size value
 *
 * Return: none
 */

void print_triangle(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{

		if ((size - (i + 1)) > j)
		{
			_putchar(32);
		}
		else
		{
			_putchar(35);
		}
		}
		_putchar(10);
	}
	if (size <= 0)
		_putchar(10);
}
