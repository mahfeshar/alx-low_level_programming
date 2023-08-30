#include "main.h"

/**
 * _sqrt - function that returns the natural square root
 *
 * @n: number that I want to get sqr
 * @i: counter
 *
 * Return: the natural square root of a number
 */

int _sqrt(int n, int i)
{
	if (n < 1 || i >= n / 2)
		return (-1);

	else if (i * i == n)
		return (i);

	else
		return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root
 *
 * @n: number that I want to get sqr
 *
 * Return: the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	return (_sqrt(n, i));
}
