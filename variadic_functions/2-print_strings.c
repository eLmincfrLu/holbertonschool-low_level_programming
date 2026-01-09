#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Verilmiş stringləri çap edir
 * @separator: stringlər arasına qoyulacaq separator
 * @n: Pass edilmiş stringlərin sayı
 *
 * Description: Əgər separator NULL-dursa, onu çap etmir.
 * Əgər string NULL-dursa, (nil) çap edir.
 * Yeni sətr ilə bitir.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *string;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);

	printf("\n");
}
