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
	char c = 'z';

	for (; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
