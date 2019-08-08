#include <stdlib.h>
/**
 * _strlen - string length
 * @str: string count
 * Return: strlen
 */
int _strlen(const char *str)
{
	int count = 0;

	while (str[count])
		++count;
	return (count);
}
/**
 * binary_to_uint - binary convert
 * @b: binary
 * Return: integer convert
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int count = 0;
	int base = 1;
	int strlen = _strlen(b) - 1;

	if (b == NULL)
		return (0);
	while (b[count])
	{
		if (b[count] != 48 && b[count] != 49)
			return (0);
		decimal += (b[strlen - count] - 48) * base;
		base = base * 2;
		count++;
	}
	return (decimal);
}
