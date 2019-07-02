/**
 * swap_int - swap numbers
 * @a: value 1
 * @b: value 2
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int c  = *b;
	int d  = *a;

	*a = c;
	*b = d;
}
