#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - strlen
 * @str: string
 * Return: integer
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}
/**
 * *argstostr - arg
 * @ac: counter
 * @av: arguments
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	char *chain = NULL;
	int cont = 0;
	int rc = ac;
	int inc = 0;
	int inc_chain = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (ac--)
	{
		cont += _strlen(av[ac]) + 1;
	}
	cont++;
	chain = malloc(cont * sizeof(char));
	while (rc--)
	{
		ac = 0;
		for (; ac < _strlen(av[inc]); ac++)
		{
			chain[inc_chain] = av[inc][ac];
			inc_chain++;
		}
		chain[inc_chain] = '\n';
		if (cont > inc_chain)
			inc_chain++;
		inc++;
	}
	return (chain);
}
