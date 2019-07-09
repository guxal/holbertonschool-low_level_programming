/**
 * compare - compare ascii
 * @X: number 1
 * @Y: number 2
 * Return: compare num
 */
int compare(const char *X, const char *Y)
{
	while (*X && *Y)
	{
		if (*X != *Y)
			return (0);
		X++;
		Y++;
	}
	return (*Y == '\0');
}
/**
 * *_strstr - str str
 * @haystack: value
 * @needle: value
 * Return: value
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if ((*haystack == *needle) && compare(haystack, needle))
			return (haystack);
		haystack++;
	}

	return (0);
}
