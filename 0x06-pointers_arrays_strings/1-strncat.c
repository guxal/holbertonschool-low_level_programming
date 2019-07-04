/**
 * _strlen - strlen data
 * @s: data
 * Return: n
 */
int _strlen(char *s)
{
	int n = 0;

	while (s[n])
		++n;

	return (n);
}
/**
 * *_strncat - concatene two strings
 * @dest: destinity
 * @src: source
 * @n: number byte
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int str_length_dest = _strlen(dest);
	int str_length_max = str_length_dest + n - 1;
	int i;
	int count = 0;

	for (i = str_length_dest; i <= str_length_max; i++)
	{
		if (src[count] == 0)
			break;
		dest[i] = src[count];
		count++;
	}

	return (dest);
}
