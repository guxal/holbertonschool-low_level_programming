/**
 * _strlen_recursion - recursion
 * @s: string
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	int n = 0;
	int cont = 0;

	if (*s != '\0')
	{
		s++;
		cont++;
		n = _strlen_recursion(s);
	}

	return (cont + n);
}
