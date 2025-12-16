#include "main.h"

/**
 * _is_prime - helper function to check if n is prime
 * @n: number to check
 * @divisor: current divisor
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int _is_prime(int n, int divisor)
{
	if (n < 2)
		return (0);
	if (n % divisor == 0)
		return (0);
	if ((divisor > n / 2))
		return (1);
	return (_is_prime(n, divisor + 1));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (_is_prime(n, 2));
}
