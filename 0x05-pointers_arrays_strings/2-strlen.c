#include <stdio.h>

int _strlen(char *s)
{
	int n = 0;

	while (s[n]) ++n;

	return (n);
}
