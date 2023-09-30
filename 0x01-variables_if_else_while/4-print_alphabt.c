#include <stdio.h>

/**
 * main - Entry point
 *
 * Decription: prints the alphabet in lowercase except q and e
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char c = 'a';

	for (; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
