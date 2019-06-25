/**
 * _islower - is lower
 * @c : is character int
 * Return: islower.
 */
int _islower(int c)
{
	int r = 0;
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			r = 1;
	}
	return (r);
}
