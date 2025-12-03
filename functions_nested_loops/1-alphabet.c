#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: character to print
 *
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_alphabet - prints the alphabet in lowercase
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}

