#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - print strings
 * @separator: separator
 * @n: n digits
 * Return: none
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list op;
	unsigned int i;
	unsigned char *p;

	if (n == 0)
		return;

	va_start(op, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(op, unsigned char *);
		if (p != NULL)
			printf("%s", p);
		else
			printf("(nil)");
		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(op);
	putchar(10);
}
