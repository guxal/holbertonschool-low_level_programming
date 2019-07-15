#include <stdlib.h>
#include <stdio.h>
/**
 * main - print cents
 * @argc: count arg
 * @argv: array
 * Return: Success 0, Error 1
 */
int main(int argc, char *argv[])
{
	int i;
	int cents[5] = {25, 10, 5, 2, 1};
	int sum = 0;
	int value = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}

	value = atoi(argv[1]);
	while (value)
	{
		for (i = 0; i <= 4; i++)
		{
			if (value >= cents[i])
			{
				value = value - cents[i];
				sum++;
				break;
			}
		}
	}
	printf("%d\n", sum);
	return (0);

}
