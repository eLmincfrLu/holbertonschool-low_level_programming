#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything based on a format string
 * @format: list of types of arguments
 * c: char
 * i: integer
 * f: float
 * s: string
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	char sep;
	unsigned int i;

	va_start(args, format);
	i = 0;
	sep = 0;
	while (format && format[i])
	{
		if (sep)
			printf(", ");
		if (format[i] == 'c')
			printf("%c", va_arg(args, int));
		if (format[i] == 'i')
			printf("%d", va_arg(args, int));
		if (format[i] == 'f')
			printf("%f", va_arg(args, double));
		if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (!str)
				printf("(nil)");
			else
				printf("%s", str);
		}
		if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')
			sep = 1;
		i++;
	}
	printf("\n");
	va_end(args);
}
