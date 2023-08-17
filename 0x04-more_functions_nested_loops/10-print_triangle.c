#include "main.h"

/**
 * print_triangle -  prints a triangle, followed by a new line.
 *
 * @size: the size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i = 0, j, k, spaces, hash;

	for (; i < size; i++)
	{
		spaces = size - i - 1;
		hash = size - spaces;
		for (j = 0; j < spaces; j++)
			_putchar(' ');
		for (k = 0; k < hash; k++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
