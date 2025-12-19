#include "main.h"

/**
 * str_len_recursion - returns string length
 * @s: string
 *
 * Return: length
 */
int str_len_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + str_len_recursion(s + 1));
}

/**
 * check_pol - checks palindrome recursively
 * @s: string
 * @baslangic: start index
 * @son: end index
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int check_pol(char *s, int baslangic, int son)
{
	if (baslangic >= son)
		return (1);

	if (s[baslangic] != s[son])
		return (0);

	return (check_pol(s, baslangic + 1, son - 1));
}

/**
 * is_palindrome - checks if string is palindrome
 * @s: string
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len;

	if (s == NULL)
		return (1);

	len = str_len_recursion(s);
	return (check_pol(s, 0, len - 1));
}
