/**
  * _isupper - is upper
  * @c: value
  *
  * Return: 0
  */
int _isupper(int c)
{
	int v = 0;
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
			v = 1;
	}
	return (v);
}
