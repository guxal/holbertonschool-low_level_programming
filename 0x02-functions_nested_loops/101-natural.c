#include <stdio.h>

/**
 * print_natural - print sum multiples of 3 or 5 below 1024
 *
 * Return: none
 */
void print_natural(void)
{
	int i;
	int sum;

	for (i = 0; i <= 1024; i++)
	{
		if ((i % 3 || i % 5) == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);
}
/**
 * main - Entry point
 *
 * Return: success 0
 */
int main(void)
{
	print_natural();
	return (0);
}
