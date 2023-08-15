#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Retrun: no return value.
*/

void print_alphabet(void)
{
	char c = 'a';
	int i = 0;

	while (i < 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
