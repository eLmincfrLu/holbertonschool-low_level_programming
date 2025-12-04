#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int j = 1;

	if (n > 0)
	{
		while (j <= n)
		{
			_putchar('\');
			j++;
		}
	}
	_putchar('\n');
}
