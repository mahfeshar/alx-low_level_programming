#include <stdio.h>
#include <stdbool.h>

/**
 * main - Entry point
 *
 * Description: printing all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	bool first_digit = true;
	int i = 0;

	for (; i < 10; i++)
	{
		if (!first_digit)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(i + '0');
		first_digit = false;
	}
	putchar('\n');
	return (0);
}
