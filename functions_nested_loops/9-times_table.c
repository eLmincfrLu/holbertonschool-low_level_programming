#include "main.h"

/**
 * times_table - prints the 9 times table starting from 0
 *
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;
	int result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			_putchar(result + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
