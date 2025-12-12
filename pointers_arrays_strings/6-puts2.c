#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: pointer to the string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;
	int a;

	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	for (a = 0; a <=i; i++)
	{
		if (a % 2 == 0)
			_putchar(str[a]);
	}
	_putchar('\0');
}
