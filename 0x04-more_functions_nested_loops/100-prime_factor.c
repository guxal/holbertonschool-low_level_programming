#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: none
 */
int main(void)
{
	long num = 612852475143;
	long i;

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			num = num / i;
		}
	}

	printf("%li\n", i);

	return (0);
}
