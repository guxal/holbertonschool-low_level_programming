/**
 * *_strchr - returns a pointer to the localed character
 * @s: value
 * @c: value
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	char *r = 0;

	do {
		if (*s == c)
		{
			r = s;
			break;
		}
	} while (*s++);

	return (r);
}
