/**
 * *_strpbrk - strpbrk copty
 * @s: string
 * @accept: string
 * Return: string
 */
char *_strpbrk(char *s, char *accept)
{

	int j;

	while (*s)
	{
		j = 0;
		while (accept[j])
		{
			if (*s == accept[j])
			{
				return (s);
			}
			++j;
		}
		s++;
	}

	return ("\0");
}
