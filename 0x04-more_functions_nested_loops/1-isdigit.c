/**
 * _isdigit - is a digit
 * @c: value
 *
 * Return:0
 */
int _isdigit(int c)
{
	int v = 0;
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (c >= 48 && c <=  58)
			v = 1;
	}
	return (v);
}
