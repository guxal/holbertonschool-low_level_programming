/**
 * _isalpha - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isalpha(int c)
{
	int r = 0;
	char i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			r = 1;
	}

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			r = 1;
	}

	return (r);
}
