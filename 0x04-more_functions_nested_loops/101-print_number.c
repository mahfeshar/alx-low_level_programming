#include "main.h"

/**
 * print_number -  prints an integer
 *
 * @n: integer input
 */

void print_number(int n)
{
	int i = n;

	if (i < 0)
	{
		_putchar('-');
		i *= -1;
	}

	if (i / 10 != 0)
		print_number(i / 10);
	_putchar(i % 10 + '0');

}
