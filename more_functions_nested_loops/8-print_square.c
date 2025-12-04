#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: size of the square
 *
 * Description: Prints a square of '#' characters with dimensions size x size.
 * If size is 0 or less, prints only a new line.
 */
void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
