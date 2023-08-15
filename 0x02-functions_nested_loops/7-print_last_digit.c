#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @num: input for func
 *
 * Return: the value of the last digit
 */

int print_last_digit(int num)
{
	int i;
	if (num < 0)
		i = -1 * (num % 10);
	else
		i = num % 10;
	_putchar(i + '0');
	return (i);
}
