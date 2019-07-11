#include <stdio.h>
/**
 * _recursion - recursion function
 * @n: float
 * @inc: incremento
 * Return: inc
 */
int _recursion(float n, int inc)
{
	int cont = 0;

	if (n < 0)
		return (-1);
	if ((n / inc) != inc)
	{
		if (n == inc)
			return (-inc);
		cont++;
		return (_recursion(n, ++inc) + cont);
	}
	else
	{
		return (1);
	}
}
/**
 * _sqrt_recursion - sqrt recursion
 * @n: integer
 * Return: _recursion
 */
int _sqrt_recursion(int n)
{
	return (_recursion(n, 1));
}
