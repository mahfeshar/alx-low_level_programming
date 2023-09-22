#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 *
 * @num: input for function.
 *
 * Return: the number after absolute.
 */

int _abs(int num)
{
	if (num < 0)
		return (-1 * num);
	return (num);
}
