#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - print all
 * @format: format and data
 */
void print_all(const char * const format, ...)
{
	va_list op;
	int i = 0;
	int flat = 1;
	char *string;

	if (format == 0)
		return;
	va_start(op, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(op, int));
			break;
			case 'i':
				printf("%i", va_arg(op, int));
			break;
			case 'f':
				printf("%f", va_arg(op, double));
			break;
			case 's':
				string = va_arg(op, char *);
				if (string == NULL)
					string = "(nil)";
				printf("%s", string);
			break;
			default:
				flat = 0;
		}
		while (format[i + 1] != '\0' && flat)
		{
			printf(", ");
			flat = 1;
			break;
		}
		i++;
	}
	va_end(op);
	putchar(10);
}
