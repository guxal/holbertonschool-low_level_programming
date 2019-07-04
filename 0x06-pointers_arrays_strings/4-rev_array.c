/**
 * reverse_array - reverse
 * @a: value
 * @n: value
 * Return: none
 */
void reverse_array(int *a, int n)
{
	int num[1024];
	int i = 0;
	int j;

	for (j = n - 1; j >= 0; j--)
	{
		num[i] = a[j];
		i++;
	}
	i = 0;
	for (; i < n - 1 ; i++)
	{
		a[i] = num[i];
	}
}
