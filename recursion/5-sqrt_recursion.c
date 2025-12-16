#include "main.h"

/**
 * _sqrt_helper - helper function to find natural square root
 * @n: number
 * @guess: current guess
 *
 * Return: natural square root, or -1 if not found
 */
int sqrt_help(int n, int guess)
{
	if ((guess * guess) == n)
		return (guess);
	if ((guess * guess) > n)
		return (-1);
	return (sqrt_help(n, guess + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 *
 * Return: natural square root, or -1 if not found
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_help(n, 1));
}
