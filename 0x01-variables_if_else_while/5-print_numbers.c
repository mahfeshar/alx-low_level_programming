#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  prints all single digit numbers of base 10
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 0;

	for (; i < 10; i++)
		printf("%i", i);
	putchar('\n');
	return (0);
}
