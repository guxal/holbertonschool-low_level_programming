#include <stdio.h>
/**
 * _strspn - _strspn int
 * @s: string
 * @accept: accept data
 * Return: int num
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int cont = 0;

	while (s[i])
	{
		if (s[i] == ' ')
			break;
		while (accept[j])
		{
			if (s[i] == accept[j])
				cont++;
			j++;
		}
		j = 0;
		i++;
	}
	return (cont);
}
