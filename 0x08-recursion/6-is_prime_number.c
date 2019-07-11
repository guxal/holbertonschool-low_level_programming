#include <stdio.h>

int _is_prime(int n, int inc)
{
	int cont;

	if (n < 0)
		return (0);
	if ((n % inc) != 0 && (n > inc))
	{
		cont = _is_prime(n, ++inc);
		return (1 * cont);
	}
	else if(n == inc)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 *
 *
 *
 */
int is_prime_number(int n)
{
	return (_is_prime(n, 2));
}
