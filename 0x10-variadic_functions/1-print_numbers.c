#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - print
 * @separator: separator
 * @n: digits
 * Return: none
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < n - 1 && separator != '\0')
			printf("%s", separator);
	}
	va_end(ap);
	putchar(10);
}
