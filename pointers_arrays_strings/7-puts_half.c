#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: pointer to the string
 */
void puts_half(char *str)
{
	int a = 0;
	int i;

	while (str[a] != '\0')
	{
		a++;
	}

	i = (a + 1) / 2;

	while (i < a)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
