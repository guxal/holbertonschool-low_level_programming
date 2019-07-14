/**
 * _strlen - strlen data
 * @s: data
 * Return: n
 */
/*
int _strlen(char *s)
{
	int n = 0;

	while (s[n])
		++n;

	return (n);
}
*/
/**
 * *_strncpy - copy two strings
 * @dest: destinity
 * @src: source
 * @n: number byte
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && i < 10; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
