#include <stdio.h>

void print_prime_factor(void);
/**
 * main - Entry Point
 *
 * Return: success 0
 */
int main(void)
{
	print_prime_factor();
	return (0);
}
/**
 * print_prime_factor - print factor prime
 *
 * Return: none
 */
void print_prime_factor(void)
{
	unsigned long long num = 612852475143;
	unsigned int i;

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			num = num / i;
		}
	}

	printf("%d\n", i);

}
