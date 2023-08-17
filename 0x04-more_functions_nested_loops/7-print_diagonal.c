#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: the number of times the character \ should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0, j;

	for (; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
