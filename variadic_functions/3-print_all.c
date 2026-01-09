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
	char *sep = "";
	char *str;

	va_start(args, format);

	if (format != NULL)  /* 1-ci if */
	{
		while (format[i] != '\0')  /* 1-ci while */
		{
			if (format[i] == 'c' || format[i] == 'i' ||
			    format[i] == 'f' || format[i] == 's')  /* 2-ci if */
			{
				/* char */
				if (format[i] == 'c')
					printf("%s%c", sep, va_arg(args, int));

				/* int */
				if (format[i] == 'i')
					printf("%s%d", sep, va_arg(args, int));

				/* float */
				if (format[i] == 'f')
					printf("%s%f", sep, va_arg(args, double));

				/* string */
				if (format[i] == 's')
				{
					str = va_arg(args, char *);
					printf("%s%s", sep, str ? str : "(nil)");
				}

				sep = ", ";
			}
			i++;
		}
	}

	va_end(args);
	printf("\n");
}
