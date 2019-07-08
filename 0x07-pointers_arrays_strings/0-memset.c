/**
 * *_memset - fills memory with a constant byte
 * @s: array memory
 * @b: constant byte
 * @n: memory length
 * Return: array *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char **p;

	while (n--)
		s[n] = b;
	p = &s;
	return (*p);
}
