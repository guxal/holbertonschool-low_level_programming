#include <stdio.h>
#include <string.h>
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
	char *str1 = malloc(256);
	//char str;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d ", n);
	//printf("%i\n", phrase);
	//printf("%d\n", n);
	last = n%10;
	printf("is %d ", last);
	if(last < 6)
	{
	strcpy(str1,"and is less than 6 and not 0");
///	str1[]="hola";
//	str1="and is less than 6 and not 0";
	}
	if(last > 5 )
	{
	strcpy(str1,"and is greater than 5");
//	str1="and is greater than 5";
	}
	if(last == 0){
	strcpy(str1,"and is 0");
//	str1="and is 0";
	}
	printf("%s\n", str1);
	return (0);
}
