#include "main.h"

/**
 * print_rev - prints a string, in reverse
 *
 * @s: string that I want to reverse.
 */

void print_rev(char *s)
{
	int i = strlen(s) - 1;

	for (; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
