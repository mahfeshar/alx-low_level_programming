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
	for (int i = 0; i < 10; i++)
		putchar(i + '0');
	for (char c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
}
