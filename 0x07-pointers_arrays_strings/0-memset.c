/**
 * *_memset - fills memory with a constant byte
 * @s: array memory
 * @b: constant byte
 * @n: memory length
 * Return: array @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n - 1; i++)
	{
		s[i] = b;
	}

	return (s);
}
