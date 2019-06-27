#include <stdio.h>

void fizzbuzz(void);
void print_fizzbuzz(int n);

void print_fizzbuzz(int n)
{
	if((n % 3 == 0) && (n % 5 == 0))
	{
		printf("FizzBuzz");
	}
	else if(n % 3 == 0)
	{
		printf("Fizz");
	}
	else if(n % 5 == 0)
	{
		printf("Buzz");
	}else{
		printf("%d", n);
	}

}
/**
 *
 *
 *
 */

void fizzbuzz(void)
{
	int i;

	for(i = 1; i <= 100; i++)
	{
		//printf("%d ", i);
		print_fizzbuzz(i);
		if(i != 100)
			printf(" ");
	}
	printf("\n");
}

int main(void)
{
	fizzbuzz();
	return (0);
}
