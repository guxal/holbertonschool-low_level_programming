/**
 * *cap_string - capitalize string
 * @s: value
 * Return: capitalize
 */
char *cap_string(char *s)
{
	int i = 0;
	int flat = 0;

	while (s[i])
	{
		if (flat == 1)
		{
			if (s[i] > 'a' && s[i] < 'z')
				s[i] = s[i] - 32;
			flat = 0;
		}
		if (s[i] == ' ')
		{
			flat = 1;
		}
		++i;
	}

	return (s);
}
