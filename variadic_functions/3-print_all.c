#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Verilmiş format əsasında istənilən tipdə dəyərləri çap edir
 * @format: format string: c = char, i = int, f = float, s = string
 *
 * Description: Əgər string NULL-dursa, (nil) çap edir.
 * Hər dəyər arasına ", " qoyur.
 * Yalnız 2 while, 2 if və maksimum 9 dəyişən istifadə olunur.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char *sep = "";

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == 'c')
			printf("%s%c", sep, va_arg(args, int));
		if (format[i] == 'i')
			printf("%s%d", sep, va_arg(args, int));
		if (format[i] == 'f')
			printf("%s%f", sep, va_arg(args, double));
		if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (str == NULL)
				printf("%s(nil)", sep);
			else
				printf("%s%s", sep, str);
		}
		sep = ", ";
		i++;
	}

	va_end(args);

	printf("\n");
}
