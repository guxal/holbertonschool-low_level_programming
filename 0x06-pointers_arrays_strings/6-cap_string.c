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
		if(i == 0){
			if (s[i] >= 97 && s[i] <= 122)
				s[i] = s[i] - 32;
		}
		if (flat == 1)
		{
			if (s[i] >= 97 && s[i] <= 122)
				s[i] = s[i] - 32;
			flat = 0;
		}
		if ((s[i] == ',') ||
		(s[i] == ';') ||
		(s[i] == '.') ||
		(s[i] == '!') ||
		(s[i] == '?') ||
		(s[i] == '"') ||
		(s[i] == '(') ||
		(s[i] == ')') ||
		(s[i] == '{') ||
		(s[i] == '}') ||
		(s[i] == ' ') ||
		(s[i] == '\t') ||
		(s[i] == '\n'))
			flat = 1;
		++i;
	}

	return (s);
}
