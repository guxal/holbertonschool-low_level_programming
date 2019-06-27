#include <stdio.h>

/**
 * fibonacci - print fibonacci 50 first numbers
 *
 * Return: 0
 */
int fibonacci(void)
{
	int i;
	unsigned long mult = 0;
	int last = 1;

	for (i = 0; i < 50; i++)
	{
		int current;

		current = mult;
		mult = mult + last;
		last = current;
		printf("%1ld", mult);
		if (i != 49)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
/**
  * main - entry point
  *
  * Return: success 0
  */
int main(void)
{
	fibonacci();
	return (0);
}

