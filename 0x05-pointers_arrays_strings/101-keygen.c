#include "main.h"
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int s;
	char c;

	srand(time(NULL));
	while (s <= 2645)
	{
		c = rand() % 120;
		s += c;
		putchar(c);
	}
	putchar(2772 - s);
	return (0);
}
