#include "main.h"

/**
 * print_triangle - prints a right-aligned triangle using #
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int a, b;
	int ct;

	if (size > 0)
	{
		for (a = 1; a <= 10; a++)
		{
			for (ct = 1; ct <= 10 - a; ct++)
			{
				_putchar(' ');
			}
			for (b = 1; b <=  a; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
