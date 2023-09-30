#include "main.h"

/**
 * _prime - prime number function
 *
 * @n: number I want to check
 * @i: counter
 *
 * Return: 1 if the input integer is a prime number
 *	otherwise return 0
 */

int _prime(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i >= n / 2)
		return (1);
	return (_prime(n, i + 1));
}

/**
 * is_prime_number - prime number function
 *
 * @n: number I want to check
 *
 * Return: 1 if the input integer is a prime number
 *      otherwise return 0
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	else if (n == 2 || n == 3)
		return (1);

	return (_prime(n, i));
}
