#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - absoluted value
 * @n: value
 *
 * Return: absoluted.
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
		for (i = n; i >= 98 ; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(",");
				putchar(' ');
			}
		}

	if (n < 98)
		for (i = n; i <= 98 ; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(",");
				putchar(' ');
			}
		}

	if (n == 98)
		printf("%d", n);

	putchar('\n');
}
