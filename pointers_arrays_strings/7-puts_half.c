#include "main.h"

/**
 * puts_half - prints the second half of a string, followed by a new line
 * @str: pointer to the string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, start, i, n;

	while (str[len] != '\0')
		len++;

	n = (len + 1) / 2;
	start = len - n;

	for (i = start; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
