#include "main.h"

/**
 * puts_half - prints the second half of a string, followed by a new line
 * @str: pointer to the string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;
	int a;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
		a = i / 2;
	else
		a = (i + 1) / 2;
	while (a <= i)
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
