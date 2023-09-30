#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: string that I want to print
 */

void puts2(char *str)
{
	int i = 0;

	for (; i < (int)strlen(str); i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
