/**
 * *_memset - fills memory with a constant byte
 * @s: array memory
 * @b: constant byte
 * @n: memory length
 * Return: array @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}

	return (s);
}
