#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: array of char
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int n, i;

	n = len / 2;
	for (i = len - n; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
