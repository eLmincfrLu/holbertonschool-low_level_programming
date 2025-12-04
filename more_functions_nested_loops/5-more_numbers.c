#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14, 10 times
 */
void more_numbers(void)
{
	int i = 1;
	int j;

	while (i <= 10)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('1');
			_putchar((j % 10) + '0');
		}
		i++;
		_putchar('\n');
	}
}
