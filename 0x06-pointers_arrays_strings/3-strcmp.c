#include <stdio.h>
/**
 * _strcmp - compare two strings
 * @s1: string 1
 * @s2: string 2
 * Return: val
 */
int _strcmp(char *s1, char *s2)
{
	int v1 = 0;
	int v2 = 0;
	int count = 0;
	int val;

	while (s1[count])
	{
		v1 = v1 + s1[count];
		++count;
	}
	count = 0;
	while (s2[count])
	{
		v2 = v2 + s2[count];
		++count;
	}
	val = v1 - v2;
	if (val != 0)
		val = s1[0] - s2[0];

	return (val);
}
