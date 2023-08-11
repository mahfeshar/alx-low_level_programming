#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printing all the numbers of base 16 in lowercas
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 0;
	char c = 'a';

	for (; i < 10; i++)
		putchar(i + '0');
	for (; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
}
