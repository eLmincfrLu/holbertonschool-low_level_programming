#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 */
void print_line(int n)
{
	int j = 1;

	if (n != 0)
	{
		while (j <= n)
		{
			_putchar('_');
			j++;
		}
	}
	_putchar('\n');
}
