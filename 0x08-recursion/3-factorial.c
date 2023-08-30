#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 *
 * @n: number to get it's fac
 *
 * Return: the factorial of a given number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	/*base case*/
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
