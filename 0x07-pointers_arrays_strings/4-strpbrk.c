/**
 * *_strpbrk - strpbrk copty
 * @s: string
 * @accept: string
 * Return: string
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	char arr[1024];
	int count = 0;

	while (s[i])
	{
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				arr[count] = s[i];
				count++;
			}
			++j;
		}
		if (s[i] == ',' || s[i] == ' ')
		{
			arr[count] = s[i];
			count++;
		}
		++i;
		j = 0;
	}
	arr[count] = '\0';
	s = arr;
	return (s);
}
