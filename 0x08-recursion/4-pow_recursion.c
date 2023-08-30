#include "main.h"

/**
 * _pow_recursion - function that returns pow
 *
 * @x: the number is base
 * @y: power integer
 *
 * Return: the value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	/*base case*/
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
