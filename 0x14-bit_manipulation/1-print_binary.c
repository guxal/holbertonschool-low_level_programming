#include "holberton.h"
#include <stdio.h>
/**
 * print_binary  - print binary by decimal
 * @n: integer
 * Result: print
 */
void print_binary(unsigned long int n)
{
	if (n > 0x01)
		print_binary(n >> 0x01);
	_putchar((n & 0x01) + 48);
}
