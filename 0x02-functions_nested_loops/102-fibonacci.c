#include <stdio.h>

/**
 * fibonacci - print fibonacci 50 first numbers
 *
 * Return: none
 */
void fibonacci(void)
{
	int i;
	long long mult = 1;
	int last = 0;

	for (i = 0; i <= 50; i++)
	{
		int current;

		current = mult;
		mult = mult + last;
		last = current;
		printf("%1lld", mult);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
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

