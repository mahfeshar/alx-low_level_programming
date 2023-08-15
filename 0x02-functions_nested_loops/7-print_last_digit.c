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
	if (num < 0)
		num *= -1;
	_putchar(num % 10 + '0');
	return (num % 10);
}
