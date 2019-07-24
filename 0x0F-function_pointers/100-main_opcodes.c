#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#define __RETURN__(value) \
	(__extension__ \
	 ({ \
	  printf("Error\n"); \
	  value; \
	  }))
/**
 * main - advance
 * @argc: argument numb
 * @argv: array argument
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int var;
	char *ptr = (char *)main;
	int i;

	if (argc != 2)
		return (__RETURN__(1));

	var = atoi(argv[1]);

	if (var < 0)
		return (__RETURN__(2));

	for (i = 0; i < var - 1; i++)
	{
		printf("%02hhx ", ptr[i]);
	}
	printf("%02hhx", ptr[i]);
	putchar(10);
	return (0);
}
