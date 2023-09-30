#include "main.h"

/**
 * print_number - print an integer
 * @n: the number
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		i *= -1;
		_putchar('-');
	}

	if (i / 10 > 0)
		print_number(i / 10);
	_putchar(i % 10 + '0');
}
