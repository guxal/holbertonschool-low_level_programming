#include <stdarg.h>
#define NULL 0
/**
 * sum_them_all - sum all termines
 * @n: n digits
 * Return: none
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0;
	unsigned int i;

	if (n == NULL || n == 0)
		return (0);

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
