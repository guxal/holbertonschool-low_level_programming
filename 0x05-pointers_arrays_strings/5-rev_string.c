#include "holberton.h"
#include <stdio.h>
/**
 *
 *
 *
 */
int _strlen(char *s)
{
	int n = 0;

	while (s[n]) ++n;
	return (n);
}

void rev_string(char *s)
{
	char s1[10];

	//printf("data1: %s\n", s);

	//printf("data: %s\n", s1);
	//s1[0] = 'H';
	//s1[1] = 'o';
	//char *d = &data;
	//*d = 'H';
	int i;
	int c = 0;

	for (i = 10; i >= 0; i--)
	{
		s1[c]= s[i];
		c++;
	}	
	printf("%s\n" , s1);
	//*s = &data;
}
