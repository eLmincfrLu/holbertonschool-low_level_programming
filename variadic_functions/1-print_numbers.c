#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Verilmiş ədədləri çap edir
 * @separator: ədədlər arasına qoyulacaq string
 * @n: Pass edilmiş ədədlərin sayı
 *
 * Description: Əgər separator NULL-dursa, onu çap etmir.
 * Yeni sətr ilə bitir.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);

	printf("\n");
}
