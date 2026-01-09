#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Verilmiştənilən tipdə arqumentləri çap edir
 * @format: format string (c, i, f, s)
 *
 * Description: Separator ', ' istifadə olunur,
 * string NULL olarsa '(nil)' çap edilir.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *sep = "";
	char *str;

	va_start(args, format);

	if (format != NULL)	/* 1-ci if */
	{
		while (format[i] != '\0')	/* 1-ci while */
		{
			if (format[i] == 'c' || format[i] == 'i' ||
				format[i] == 'f' || format[i] == 's')	/* 2-ci if */
			{
				switch (format[i])
				{
					case 'c':
						printf("%s%c", sep, va_arg(args, int));
						break;
					case 'i':
						printf("%s%d", sep, va_arg(args, int));
						break;
					case 'f':
						printf("%s%f", sep, va_arg(args, double));
						break;
					case 's':
						str = va_arg(args, char *);
						printf("%s%s", sep, str ? str : "(nil)");
						break;
				}
				sep = ", ";
			}
			i++;
		}
	}

	va_end(args);
	printf("\n");
}
