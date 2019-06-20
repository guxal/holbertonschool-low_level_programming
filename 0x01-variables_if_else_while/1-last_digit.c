#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d ", n);
	last = n % 10;
	printf("is %d ", last);
	if (last < 6)
	{
	printf("and is less than 6 and not 0\n");
	}
	if (last > 5)
	{
	printf("and is greater than 5\n");
	}
	if (last == 0)
	{
	printf("and is 0\n");
	}
	return (0);
}
