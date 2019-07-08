/**
 * *_memcpy - copies memory area
 * @dest: destination copy
 * @src: source copy
 * @n: number bytes copy
 * Return: destination *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	const char *s = src;

	while (n--)
		*d++ = *s++;

	return (dest);
}
